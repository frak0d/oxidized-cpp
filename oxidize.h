#pragma once
#include <cstdint>

// Typedefs :-

// needed for custom literals
typedef unsigned long long ull;

typedef std::int8_t  i8;
typedef std::int16_t i16;
typedef std::int32_t i32;
typedef std::int64_t i64;

typedef std::uint8_t  u8;
typedef std::uint16_t u16;
typedef std::uint32_t u32;
typedef std::uint64_t u64;

typedef float  f32;
typedef double f64;

typedef __int128_t  i128; // these are
typedef __uint128_t u128; // not properly
typedef long double f128; // supported yet

// Custom Literals :-

consteval i8   operator ""i8  (ull n) {return static_cast<i8 >(n);}
consteval i16  operator ""i16 (ull n) {return static_cast<i16>(n);}
consteval i32  operator ""i32 (ull n) {return static_cast<i32>(n);}
consteval i64  operator ""i64 (ull n) {return static_cast<i64>(n);}

consteval u8   operator ""u8  (ull n) {return static_cast<u8 >(n);}
consteval u16  operator ""u16 (ull n) {return static_cast<u16>(n);}
consteval u32  operator ""u32 (ull n) {return static_cast<u32>(n);}
consteval u64  operator ""u64 (ull n) {return static_cast<u64>(n);}

consteval i128 operator ""i128(ull n) {return static_cast<i128>(n);}
consteval u128 operator ""u128(ull n) {return static_cast<u128>(n);}

consteval f32  operator ""f32 (ull n) {return static_cast<f32> (n);}
consteval f64  operator ""f64 (ull n) {return static_cast<f64> (n);}
consteval f128 operator ""f128(ull n) {return static_cast<f128>(n);}

consteval f32  operator ""f32 (f128 n){return static_cast<f32> (n);}
consteval f64  operator ""f64 (f128 n){return static_cast<f64> (n);}
consteval f128 operator ""f128(f128 n){return static_cast<f128>(n);}
