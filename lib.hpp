#pragma once

auto foo(int i)
{
    return i == 42;
}

template <class T>
struct test
{
    T value;

    friend constexpr auto operator==(const test& a, const test& b)
    {
        return a.value== b.value;
    }
    friend constexpr auto operator!=(const test& a, const test& b)
    {
        return not (a == b);
    }
};
