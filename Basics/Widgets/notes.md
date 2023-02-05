# Widgets
This is my notes for widget.
GTKMM applications are windows that have widgets in them, for each widget there is an obect connected to it. So you only need to call a method of the widget to effect it.

They are aranged insidecontainer widgets such as frames and note books. It uses hierarchies. Some of them such as Gtk::Grid arent vidsible but arrange other widgets.

    m_box.append(m_Button1);
    m_box.append(m_Button2);

This is code that adds 2 Gtk::Button widgets to a Gtk::Box container.

    m_frame.set_child(m_box);

THis is the code used to add the box to a Gtk::Frame which has a visible frame and title.

## Container widgets

Container widgets derive from Gtk::Widget. Some container widgets can hold many child widgets so they usually have more complex interfaces and there are others which can only hold one child widget.