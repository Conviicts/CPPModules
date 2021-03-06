#include <iostream>
#include <stdint.h>

typedef struct {
    std::string	data;
} Data;

uintptr_t   serialize(Data *ptr) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data *  deserialize(uintptr_t raw) {
    Data *ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}

int main(void) {

    Data		*data = new Data;
	Data		*new_data;
	uintptr_t	raw;

	data->data = "Hello world !";

	std::cout << data->data << std::endl;
	std::cout << std::hex << data << std::endl;

	raw = serialize(data);
	new_data = deserialize(raw);
	std::cout << new_data->data << std::endl;
	std::cout << std::hex << new_data << std::endl;
	delete data;
    return (0);
}