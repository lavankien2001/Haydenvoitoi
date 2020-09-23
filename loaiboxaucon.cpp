#include <iostream>
#include <string>
void delete_str( std:: string& str, const std::string& deletee ) {
    size_t pos;
    size_t len = deletee.length();
    do {
        pos = str.find( deletee );
        if( pos == std::string::npos )
            break;
        str.erase( pos, len );
    }
    while( true );
}
 
int main() {
    std::string str,xaucon;
    fflush(stdin);
    getline(std::cin,str);
    fflush(stdin);
    getline(std::cin,xaucon);
    delete_str( str, xaucon );
    std::cout << str << '\n';
}
