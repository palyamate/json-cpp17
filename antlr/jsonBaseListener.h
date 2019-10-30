
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "jsonListener.h"


/**
 * This class provides an empty implementation of jsonListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  jsonBaseListener : public jsonListener {
public:

  virtual void enterJson(jsonParser::JsonContext * /*ctx*/) override { }
  virtual void exitJson(jsonParser::JsonContext * /*ctx*/) override { }

  virtual void enterValue(jsonParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(jsonParser::ValueContext * /*ctx*/) override { }

  virtual void enterObject(jsonParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(jsonParser::ObjectContext * /*ctx*/) override { }

  virtual void enterMembers(jsonParser::MembersContext * /*ctx*/) override { }
  virtual void exitMembers(jsonParser::MembersContext * /*ctx*/) override { }

  virtual void enterMember(jsonParser::MemberContext * /*ctx*/) override { }
  virtual void exitMember(jsonParser::MemberContext * /*ctx*/) override { }

  virtual void enterArray(jsonParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(jsonParser::ArrayContext * /*ctx*/) override { }

  virtual void enterElements(jsonParser::ElementsContext * /*ctx*/) override { }
  virtual void exitElements(jsonParser::ElementsContext * /*ctx*/) override { }

  virtual void enterElement(jsonParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(jsonParser::ElementContext * /*ctx*/) override { }

  virtual void enterString(jsonParser::StringContext * /*ctx*/) override { }
  virtual void exitString(jsonParser::StringContext * /*ctx*/) override { }

  virtual void enterCharacters(jsonParser::CharactersContext * /*ctx*/) override { }
  virtual void exitCharacters(jsonParser::CharactersContext * /*ctx*/) override { }

  virtual void enterCharacter(jsonParser::CharacterContext * /*ctx*/) override { }
  virtual void exitCharacter(jsonParser::CharacterContext * /*ctx*/) override { }

  virtual void enterEscape(jsonParser::EscapeContext * /*ctx*/) override { }
  virtual void exitEscape(jsonParser::EscapeContext * /*ctx*/) override { }

  virtual void enterNumber(jsonParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(jsonParser::NumberContext * /*ctx*/) override { }

  virtual void enterSigned_int(jsonParser::Signed_intContext * /*ctx*/) override { }
  virtual void exitSigned_int(jsonParser::Signed_intContext * /*ctx*/) override { }

  virtual void enterUnsigned_int(jsonParser::Unsigned_intContext * /*ctx*/) override { }
  virtual void exitUnsigned_int(jsonParser::Unsigned_intContext * /*ctx*/) override { }

  virtual void enterReal(jsonParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(jsonParser::RealContext * /*ctx*/) override { }

  virtual void enterBool_val(jsonParser::Bool_valContext * /*ctx*/) override { }
  virtual void exitBool_val(jsonParser::Bool_valContext * /*ctx*/) override { }

  virtual void enterNull_value(jsonParser::Null_valueContext * /*ctx*/) override { }
  virtual void exitNull_value(jsonParser::Null_valueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

