#include <iostream>

int main() {

    //copy initialization using =
    int copy_init = 1;

    //direct init using ()
    int direct_init( 1 );

    //list init using {}
    int list_init{ 1 };

    std::cout << "Copy init: " << copy_init << '\n';
    std::cout << "Direct init: " << direct_init << '\n';
    std::cout << "List init: " << list_init << '\n';

    return 0;

}
