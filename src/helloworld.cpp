//This file has the code to print hello world in our local host
#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    app.port(3000).multithreaded().run();
}
