#include "./helloworld.h"
#include <gtkmm/cssprovider.h>
#include <iostream>

HelloWorld::HelloWorld()  // creates a new button with label "Hello World".
{
    m_button = new Gtk::Button("hello world");

    // Sets border width of the window.
    set_border_width(10);
  
    auto css_provider = Gtk::CssProvider::create();
    css_provider->load_from_data(
        "button {background-image: image(cyan);}\
        button:hover {background-image: image(green);}\
        button:active {background-image: image(brown);}");
    m_button->get_style_context()->add_provider(
    css_provider, GTK_STYLE_PROVIDER_PRIORITY_USER);
    
    // When the button receives the "clicked" signal, it will call the
    // on_button_clicked() method defined below.
    m_button->signal_clicked()
    .connect(
        sigc::mem_fun(
                *this,
                &HelloWorld::on_button_clicked));
                // you gotta qualify a member function that is considered as an argument

    // This packs the button into the Window (a container).
    // the button tho, is invisible
    add(*m_button);

    // The final step is to display this newly created widget...
    m_button->show();
}

HelloWorld::~HelloWorld() = default;


void HelloWorld::on_button_clicked()
{
  std::cout << "Hello World" << std::endl;
}