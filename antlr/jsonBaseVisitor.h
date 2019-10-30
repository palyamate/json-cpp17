
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "jsonVisitor.h"


/**
 * This class provides an empty implementation of jsonVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  jsonBaseVisitor : public jsonVisitor {
public:

  virtual antlrcpp::Any visitJson(jsonParser::JsonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(jsonParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject(jsonParser::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMembers(jsonParser::MembersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember(jsonParser::MemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(jsonParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElements(jsonParser::ElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(jsonParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(jsonParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacters(jsonParser::CharactersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacter(jsonParser::CharacterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEscape(jsonParser::EscapeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(jsonParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_int(jsonParser::Signed_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsigned_int(jsonParser::Unsigned_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal(jsonParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_val(jsonParser::Bool_valContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_value(jsonParser::Null_valueContext *ctx) override {
    return visitChildren(ctx);
  }


};

