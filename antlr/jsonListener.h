
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "jsonParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by jsonParser.
 */
class  jsonListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterJson(jsonParser::JsonContext *ctx) = 0;
  virtual void exitJson(jsonParser::JsonContext *ctx) = 0;

  virtual void enterValue(jsonParser::ValueContext *ctx) = 0;
  virtual void exitValue(jsonParser::ValueContext *ctx) = 0;

  virtual void enterObject(jsonParser::ObjectContext *ctx) = 0;
  virtual void exitObject(jsonParser::ObjectContext *ctx) = 0;

  virtual void enterMembers(jsonParser::MembersContext *ctx) = 0;
  virtual void exitMembers(jsonParser::MembersContext *ctx) = 0;

  virtual void enterMember(jsonParser::MemberContext *ctx) = 0;
  virtual void exitMember(jsonParser::MemberContext *ctx) = 0;

  virtual void enterArray(jsonParser::ArrayContext *ctx) = 0;
  virtual void exitArray(jsonParser::ArrayContext *ctx) = 0;

  virtual void enterElements(jsonParser::ElementsContext *ctx) = 0;
  virtual void exitElements(jsonParser::ElementsContext *ctx) = 0;

  virtual void enterElement(jsonParser::ElementContext *ctx) = 0;
  virtual void exitElement(jsonParser::ElementContext *ctx) = 0;

  virtual void enterString(jsonParser::StringContext *ctx) = 0;
  virtual void exitString(jsonParser::StringContext *ctx) = 0;

  virtual void enterCharacters(jsonParser::CharactersContext *ctx) = 0;
  virtual void exitCharacters(jsonParser::CharactersContext *ctx) = 0;

  virtual void enterCharacter(jsonParser::CharacterContext *ctx) = 0;
  virtual void exitCharacter(jsonParser::CharacterContext *ctx) = 0;

  virtual void enterEscape(jsonParser::EscapeContext *ctx) = 0;
  virtual void exitEscape(jsonParser::EscapeContext *ctx) = 0;

  virtual void enterNumber(jsonParser::NumberContext *ctx) = 0;
  virtual void exitNumber(jsonParser::NumberContext *ctx) = 0;

  virtual void enterSigned_int(jsonParser::Signed_intContext *ctx) = 0;
  virtual void exitSigned_int(jsonParser::Signed_intContext *ctx) = 0;

  virtual void enterUnsigned_int(jsonParser::Unsigned_intContext *ctx) = 0;
  virtual void exitUnsigned_int(jsonParser::Unsigned_intContext *ctx) = 0;

  virtual void enterReal(jsonParser::RealContext *ctx) = 0;
  virtual void exitReal(jsonParser::RealContext *ctx) = 0;

  virtual void enterBool_val(jsonParser::Bool_valContext *ctx) = 0;
  virtual void exitBool_val(jsonParser::Bool_valContext *ctx) = 0;

  virtual void enterNull_value(jsonParser::Null_valueContext *ctx) = 0;
  virtual void exitNull_value(jsonParser::Null_valueContext *ctx) = 0;


};

