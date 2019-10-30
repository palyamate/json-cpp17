
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "jsonParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by jsonParser.
 */
class  jsonVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by jsonParser.
   */
    virtual antlrcpp::Any visitJson(jsonParser::JsonContext *context) = 0;

    virtual antlrcpp::Any visitValue(jsonParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitObject(jsonParser::ObjectContext *context) = 0;

    virtual antlrcpp::Any visitMembers(jsonParser::MembersContext *context) = 0;

    virtual antlrcpp::Any visitMember(jsonParser::MemberContext *context) = 0;

    virtual antlrcpp::Any visitArray(jsonParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitElements(jsonParser::ElementsContext *context) = 0;

    virtual antlrcpp::Any visitElement(jsonParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitString(jsonParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitCharacters(jsonParser::CharactersContext *context) = 0;

    virtual antlrcpp::Any visitCharacter(jsonParser::CharacterContext *context) = 0;

    virtual antlrcpp::Any visitEscape(jsonParser::EscapeContext *context) = 0;

    virtual antlrcpp::Any visitNumber(jsonParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitSigned_int(jsonParser::Signed_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_int(jsonParser::Unsigned_intContext *context) = 0;

    virtual antlrcpp::Any visitReal(jsonParser::RealContext *context) = 0;

    virtual antlrcpp::Any visitBool_val(jsonParser::Bool_valContext *context) = 0;

    virtual antlrcpp::Any visitNull_value(jsonParser::Null_valueContext *context) = 0;


};

