const std = @import("std");
const json = std.json;

const payload =
    \\{
    \\    "vals": {
    \\        "testing": 1,
    \\        "production": 42
    \\    },
    \\    "uptime": 9999
;

json(
  \\ hello
  \\ hello
  ,
  hello
);

const @"hello" = 1;

const Config = struct { vals: struct { testing: u8, production: u8 } };

const config = x: {
    var stream = json.TokenStream.init(payload);
    const res = json.parse(Config, &stream, .{});
    // Assert no err can occur since we are
    // parsing this JSON at comptime!
    break :x res catch unreachable;
};

pub fn main() !void {
    if (config.vals.production > 50) {
        @compileErr("only up to 50 supported");
    }
    std.log.info("up={d}{d}\n", .{ config.uptime, @"hello" });
}
