#include "Serializer.hpp"
#include <string>

int main(void)
{
	Data data = {10, 2};
	uintptr_t raw = Serializer::serialize(&data);
	Data *res = Serializer::deserialize(raw);
	std::cout << "x: " << res->x << " | y: " << res->y << std::endl;
}