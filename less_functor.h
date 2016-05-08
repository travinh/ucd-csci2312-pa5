//
// Created by Vinh Van Tran on 5/8/16.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H


namespace CS2312 {


    template<typename T>
    class less {
    public:
        bool operator()(T const &a, T const &b) {
            return (a < b);
        }

    };

    template<>
    class less<std::string> {
    public:
        bool operator()(const string &a, const string &b) {
            return (a < b);
        }
    };

    template<>
    class less<const char *>
    {
    public:
        bool operator()(const char * a, const char * b)
        {
            std:: string str1 = a, str2 = b;
            return (str1 < str2);
        }
    };
}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H

