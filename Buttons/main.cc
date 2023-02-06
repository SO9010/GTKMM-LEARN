#include "button.h"
#include <gtkmm-4.0/gtkmm/application.h>

int main(int argc, char *argv[]){
    auto app = Gtk::Application::create("org.gtkmm.example");

    // Shows the window and reeturs when it is closed
    return app->make_window_and_run<Button>(argc, argv);
}