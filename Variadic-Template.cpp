template <typename T, typename... Args>
constexpr bool fun_equal(T const& a0, Args const&... args)
{
    return ((args == a0) && ...);
}

int main()
{
    cout << boolalpha;
    cout << fun_equal(1) << '\n';                // true
    cout << fun_equal(0, 0, 0) << '\n';            // true
    cout << fun_equal(1, 1, 1, 1, 1) << '\n';    // true
    cout << fun_equal(1, 2, 3, 4, 5) << '\n';    // false
    
    return 0;
}

template <typename T, typename... Args>
constexpr bool fun_equal(T const& a0, Args const&... args)
{
	return ((args == a0) && ...);
}

int main()
{
	cout << boolalpha;
	cout << fun_equal(1) << '\n';				// true
	cout << fun_equal(0, 0, 0) << '\n';			// true
	cout << fun_equal(1, 1, 1, 1, 1) << '\n';	// true
	cout << fun_equal(1, 2, 3, 4, 5) << '\n';	// false

	return 0;
}
