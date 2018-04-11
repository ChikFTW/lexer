#include <cstdlib>
#include <cstdio>
#include <memory>
#include "include/fsize.h"
#include "include/error_count.h"
#include "include/location.h"
#include "include/trie.h"
#include "include/lexerscaner.h"
#include "include/char_conv.h"
#include "include/errors_and_tries.h"
#include "include/file_contents.h"
#include "include/char_trie.h"

/* Функция, открывающая файл с тестовым текстом. Возвращает строку с текстом, если открыть 
файл удалось и размер файла не равен нулю, и пустую строку в противном случае. */
std::u32string init_testing(const char* name){
    auto contents = get_contents(name);
    auto str      = contents.second;
    switch(contents.first){
        case Get_contents_return_code::Normal:
            if(!str.length()){
                puts("Длина файла равна нулю.");
                return U"";
            }else{
                return utf8_to_u32string(str.c_str());
    }
        break;

    case Get_contents_return_code::Impossible_open:
    puts("Невозможно открыть файл.");
    return U"";

    case Get_contents_return_code::Read_error: 
    puts("Ошибка при чтении файла.");
    return U"";
    }
    return U"";
}

int main(int argc, char** argv) {
if(1 == argc){
puts("Не задан тестовый файл.");
}else{
std::u32string t = init_testing(argv[1]);
if(t.length()){
char32_t* p   = const_cast<char32_t*>(t.c_str());
auto      loc = std::make_shared<Location>(p);

Errors_and_tries etr;
etr.ec        = std::make_shared<Error_count>();
etr.ids_trie  = std::make_shared<Char_trie>();
etr.strs_trie = std::make_shared<Char_trie>();
auto sc       = std::make_shared<Scaner>(loc,  etr);
test_scaner(sc);
}
}
return 0;
}
