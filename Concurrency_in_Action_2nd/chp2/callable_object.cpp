#include <thread>

void do_something() {}
void do_something_else() {}

class background_task {
    public:
	void operator()() const {
		do_something();
		do_something_else();
	}
};

int main() {
	// background_task f;
	// std::thread my_thread(f);
	std::thread my_thread_1(background_task());
	std::thread my_thread_2((background_task()));
	std::thread my_thread_3{background_task()};
	std::thread my_thread_4([] {
		do_something();
		do_something_else();
	});
}
