
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  jsonParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    EXPONENT = 8, ZERO = 9, ONENINE = 10, DIGIT = 11, OPENING_CURLY = 12, 
    CLOSING_CURLY = 13, LEFT_BRACKET = 14, RIGHT_BRACKET = 15, COMMA = 16, 
    SEPARATOR = 17, QUOTE_MARK = 18, BACKSLASH = 19, TRUE_CONST = 20, FALSE_CONST = 21, 
    NULL_VALUE = 22, PLUS = 23, MINUS = 24, LOWERCASE = 25, UPPERCASE = 26, 
    HEX = 27, DEC_POINT = 28, WS = 29
  };

  enum {
    RuleJson = 0, RuleValue = 1, RuleObject = 2, RuleMembers = 3, RuleMember = 4, 
    RuleArray = 5, RuleElements = 6, RuleElement = 7, RuleString = 8, RuleCharacters = 9, 
    RuleCharacter = 10, RuleEscape = 11, RuleNumber = 12, RuleSigned_int = 13, 
    RuleUnsigned_int = 14, RuleReal = 15, RuleBool_val = 16, RuleNull_value = 17
  };

  jsonParser(antlr4::TokenStream *input);
  ~jsonParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class JsonContext;
  class ValueContext;
  class ObjectContext;
  class MembersContext;
  class MemberContext;
  class ArrayContext;
  class ElementsContext;
  class ElementContext;
  class StringContext;
  class CharactersContext;
  class CharacterContext;
  class EscapeContext;
  class NumberContext;
  class Signed_intContext;
  class Unsigned_intContext;
  class RealContext;
  class Bool_valContext;
  class Null_valueContext; 

  class  JsonContext : public antlr4::ParserRuleContext {
  public:
    JsonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonContext* json();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();
    ArrayContext *array();
    StringContext *string();
    NumberContext *number();
    Bool_valContext *bool_val();
    Null_valueContext *null_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENING_CURLY();
    antlr4::tree::TerminalNode *CLOSING_CURLY();
    MembersContext *members();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  MembersContext : public antlr4::ParserRuleContext {
  public:
    MembersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberContext *> member();
    MemberContext* member(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MembersContext* members();

  class  MemberContext : public antlr4::ParserRuleContext {
  public:
    MemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    antlr4::tree::TerminalNode *SEPARATOR();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberContext* member();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    ElementsContext *elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  ElementsContext : public antlr4::ParserRuleContext {
  public:
    ElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementsContext* elements();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementContext* element();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> QUOTE_MARK();
    antlr4::tree::TerminalNode* QUOTE_MARK(size_t i);
    CharactersContext *characters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  CharactersContext : public antlr4::ParserRuleContext {
  public:
    CharactersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CharacterContext *> character();
    CharacterContext* character(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharactersContext* characters();

  class  CharacterContext : public antlr4::ParserRuleContext {
  public:
    CharacterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOWERCASE();
    antlr4::tree::TerminalNode *UPPERCASE();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *BACKSLASH();
    EscapeContext *escape();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterContext* character();

  class  EscapeContext : public antlr4::ParserRuleContext {
  public:
    EscapeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKSLASH();
    antlr4::tree::TerminalNode *QUOTE_MARK();
    std::vector<antlr4::tree::TerminalNode *> HEX();
    antlr4::tree::TerminalNode* HEX(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EscapeContext* escape();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RealContext *real();
    Signed_intContext *signed_int();
    Unsigned_intContext *unsigned_int();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Signed_intContext : public antlr4::ParserRuleContext {
  public:
    Signed_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    Unsigned_intContext *unsigned_int();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_intContext* signed_int();

  class  Unsigned_intContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONENINE();
    antlr4::tree::TerminalNode *PLUS();
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    antlr4::tree::TerminalNode *ZERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_intContext* unsigned_int();

  class  RealContext : public antlr4::ParserRuleContext {
  public:
    RealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_POINT();
    std::vector<Signed_intContext *> signed_int();
    Signed_intContext* signed_int(size_t i);
    std::vector<Unsigned_intContext *> unsigned_int();
    Unsigned_intContext* unsigned_int(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    antlr4::tree::TerminalNode *EXPONENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealContext* real();

  class  Bool_valContext : public antlr4::ParserRuleContext {
  public:
    Bool_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_CONST();
    antlr4::tree::TerminalNode *FALSE_CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_valContext* bool_val();

  class  Null_valueContext : public antlr4::ParserRuleContext {
  public:
    Null_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_valueContext* null_value();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

