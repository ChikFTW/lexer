/*
    File:    implement_delimiter_automaton.h
    Created: 12 January 2018 at 14:54 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#ifndef IMPLEMENT_DELIMITER_AUTOMATON_H
#define IMPLEMENT_DELIMITER_AUTOMATON_H
#include <memory>
#include "../include/info_for_constructing.h"
#include "../include/automaton_constructing_info.h"
#include "../include/errors_and_tries.h"
#include "../include/scope.h"

Automaton_constructing_info
    implement_delimiter_automaton(info_for_constructing::Info&  info,
                                  const Errors_and_tries&       et,
                                  const std::shared_ptr<Scope>& scope);
#endif