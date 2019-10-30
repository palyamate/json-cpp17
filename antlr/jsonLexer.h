
// Generated from json.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  jsonLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    EXPONENT = 8, ZERO = 9, ONENINE = 10, DIGIT = 11, OPENING_CURLY = 12, 
    CLOSING_CURLY = 13, LEFT_BRACKET = 14, RIGHT_BRACKET = 15, COMMA = 16, 
    SEPARATOR = 17, QUOTE_MARK = 18, BACKSLASH = 19, TRUE_CONST = 20, FALSE_CONST = 21, 
    NULL_VALUE = 22, PLUS = 23, MINUS = 24, LOWERCASE = 25, UPPERCASE = 26, 
    HEX = 27, DEC_POINT = 28, WS = 29
  };

  jsonLexer(antlr4::CharStream *input);
  ~jsonLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

