#include "iter.hpp"

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	::iter(arr, 5, func);
	return 0;
}