#include "helloworld.h"
#include <gtkmm-4.0/gtkmm/application.h>

int main(int argc, char* argv[]){
    auto app = Gtk::Application::create("org.gtkmm.example"); 
    // Shows the window and returns whe it is closed
    return app->make_window_and_run<HelloWorld>(argc, argv);
    // Note to self, the <> is a type class. 
}

