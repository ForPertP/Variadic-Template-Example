# Variadic-Template
Educational source for students.

Error C7518 fold expressions require at least '/std:c++17'

First, check the mode you are compiling.(Release, Debug)

And modify the option to the corresponding compile mode.

if (ReleaseMode == true)
{
    Modify Release Configuration : least '/std:c++17'
}
else if (DebugMode == true)
{
    Modify Debug Configuration : least '/std:c++17'
}
