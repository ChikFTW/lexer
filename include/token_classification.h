/*
    File:    token_classification.h
    Created: 25 March 2018 at 15:45 Moscow time
    Author:  Chikmakrev Ilya
    E-mails: ichikmarev@gmail.com
*/

#ifndef TOKEN_CLASSIFICATION_H
#define TOKEN_CLASSIFICATION_H
#include "../include/main_lexem_info.h"
enum class Lexem_category : unsigned short{
    None,                  Unknown,               Literal,
    Kw_module,             Ident,                 Kw_uses,
    Kw_export,             Kw_var,                Comma,
    Semicolon,             Colon,                 Dot,
    Open_round_bracket,    Closed_round_bracket,  Open_square_bracket,
    Closed_square_bracket, Equal_sign,            At_sign,
    Tuple_begin,           Tuple_end,             Variant_delimiter,
    Kw_type,               Kw_array,              Size_changer,
    Modified_type,         Non_modified_type,     Kw_function,
    Kw_value,              Kw_ref,                Kw_enum,
    Kw_struct,             Conditional_op,        Lor_op,
    Land_op,               Lnot,                  Rel_op,
    Bor_op,                Band_op,               Bnot,
    Add_op,                Mul_op,                Pow_op,
    Size,                  Dim_size,              Kw_alloc,
    Allocated_array_open,  Allocated_array_close, Module_name_prefix,
    Scope_resolution,      Assign_to_field,       Label_prefix,
    Label_suffix,          Kw_delete,             Kw_if,
    Kw_then,               Kw_else,               Kw_elif,
    Kw_endif,              Kw_for,                Kw_final,
    Kw_repeat,             Kw_while,              Kw_as_long_as,
    Kw_spider,             Kw_exit,               Kw_continue,
    Kw_return,             Kw_case,               Assign_op,
    Kw_read,               Kw_print,              Kw_match,
    Pattern_is,            Br_dots,               Kw_from,
    Kw_const,              Open_curly_bracket,    Closed_curly_bracket,
    Int_reg, 		   Float_reg,
    Mov8fromM, 		   Mov16fromM,		  Mov32fromM,
    Mov64fromM,
    Mov, 		   Movs, 		  Movu,
    Mov8toM, 		   Mov16toM, 		  Mov32toM,
    Mov64toM,
    IWithStack,
    IArith3, 		   IDivmod,	  	  IBitwise3,
    INot,
    Fmov,		   Fmov32fromM,           Fmov64fromM,
    Fmov70fromM, 	   Fmov32toM,             Fmov64toM,
    Fmov80toM, 		
    FWithStack,
    FArith3,
    Cmpf,		   Round,		  Frac,
    JmpCallA, 		   JmpCallR, 	          CJmpCallA,
    CJmpCallR,		   Ret, 		  CRet,
    RetWithClean,	   CRetWithClean,	  Trap
};

Lexem_category get_lexem_category(const Main_lexem_info& li);
#endif
