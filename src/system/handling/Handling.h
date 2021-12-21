#ifndef HANDLING_H
#define HANDLIN_H
#include <iostream>
class Handler
{
private:
    Handler *next_

public:
    Handler() = default;
    Handler *SetNext(Handler *next);
    void handle(std::string request);

protected:
};

Handler *Handler::SetNext(Handler *next)
{
    if (next_ != nullptr)
    {
        next_ = next;
    }
}

void Handler::handle(std::string request)
{
    
}

int main(int argc, char const *argv[])
{
    Handler *h1 = new Handler();
    Handler *h2 = new Handler();
    Handler *h3 = new Handler();

    h1->SetNext(h2);
    return 0;
}

#endif