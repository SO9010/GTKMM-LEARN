# Signals

GTKMM is event driven. A signal gets emitted by a widget. Each widget has a diffent set of signals. We use singal handlers to catch the buttons singals.

GTKMM uses libsigc++ to implement singlas. 
    
    m_button1.signal_clicked().connect( sigc::mem_fun(*this,
    &HelloWorld::on_button_clicked) );

This is an example of code that connects a buttons cicked signal with a signal handler called "on_button_clicked".