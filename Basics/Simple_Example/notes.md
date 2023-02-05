# Simple Example Notes
    "#include <gtkmm-4.0/gtkmm.h>"
This include path is usually quite specific to the computer and instilation path.
This holds the headers for the entire GTKMM kit, this is usually not a good idea but for a simple program its fine.

    auto app = Gtk::Application::create("org.gtkmm.examples.base");

This creats a GTK application obkect, stored in a smart pointer (Glib::RefPtr). This is neede din all GTKMM apps. The create() method initilizes GTKMM.

    Gtk::Window window;
    window.set_default_size(200, 200);

This is pretty self explanitary, sets the default window size. 

    return app->run(window, argc, argv);

This line shows the window and enters the gtkmm main processing loop, this will finish when the window is closed. 

    g++ SimpleExample.cc -o simple `pkg-config gtkmm-4.0 --cflags --libs`

Compile with this code in bash.
Then run with: 
    
    ./simple

I actually should create a build system as to cater to the multi file programs but as we are looking for simplisity its fine.

It should show something like this:

![SimpleExample](/Basics/SimpleExample/Images/Screenshot%20from%202023-02-05%2011-16-13.png)

