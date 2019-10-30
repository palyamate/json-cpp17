
// Generated from json.g4 by ANTLR 4.7.2


#include "jsonListener.h"
#include "jsonVisitor.h"

#include "jsonParser.h"


using namespace antlrcpp;
using namespace antlr4;

jsonParser::jsonParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

jsonParser::~jsonParser() {
  delete _interpreter;
}

std::string jsonParser::getGrammarFileName() const {
  return "json.g4";
}

const std::vector<std::string>& jsonParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& jsonParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- JsonContext ------------------------------------------------------------------

jsonParser::JsonContext::JsonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::ValueContext* jsonParser::JsonContext::value() {
  return getRuleContext<jsonParser::ValueContext>(0);
}


size_t jsonParser::JsonContext::getRuleIndex() const {
  return jsonParser::RuleJson;
}

void jsonParser::JsonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJson(this);
}

void jsonParser::JsonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJson(this);
}


antlrcpp::Any jsonParser::JsonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitJson(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::JsonContext* jsonParser::json() {
  JsonContext *_localctx = _tracker.createInstance<JsonContext>(_ctx, getState());
  enterRule(_localctx, 0, jsonParser::RuleJson);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

jsonParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::ObjectContext* jsonParser::ValueContext::object() {
  return getRuleContext<jsonParser::ObjectContext>(0);
}

jsonParser::ArrayContext* jsonParser::ValueContext::array() {
  return getRuleContext<jsonParser::ArrayContext>(0);
}

jsonParser::StringContext* jsonParser::ValueContext::string() {
  return getRuleContext<jsonParser::StringContext>(0);
}

jsonParser::NumberContext* jsonParser::ValueContext::number() {
  return getRuleContext<jsonParser::NumberContext>(0);
}

jsonParser::Bool_valContext* jsonParser::ValueContext::bool_val() {
  return getRuleContext<jsonParser::Bool_valContext>(0);
}

jsonParser::Null_valueContext* jsonParser::ValueContext::null_value() {
  return getRuleContext<jsonParser::Null_valueContext>(0);
}


size_t jsonParser::ValueContext::getRuleIndex() const {
  return jsonParser::RuleValue;
}

void jsonParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void jsonParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any jsonParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::ValueContext* jsonParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, jsonParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::OPENING_CURLY: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        object();
        break;
      }

      case jsonParser::LEFT_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        array();
        break;
      }

      case jsonParser::QUOTE_MARK: {
        enterOuterAlt(_localctx, 3);
        setState(40);
        string();
        break;
      }

      case jsonParser::ZERO:
      case jsonParser::ONENINE:
      case jsonParser::PLUS:
      case jsonParser::MINUS: {
        enterOuterAlt(_localctx, 4);
        setState(41);
        number();
        break;
      }

      case jsonParser::TRUE_CONST:
      case jsonParser::FALSE_CONST: {
        enterOuterAlt(_localctx, 5);
        setState(42);
        bool_val();
        break;
      }

      case jsonParser::NULL_VALUE: {
        enterOuterAlt(_localctx, 6);
        setState(43);
        null_value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

jsonParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::ObjectContext::OPENING_CURLY() {
  return getToken(jsonParser::OPENING_CURLY, 0);
}

tree::TerminalNode* jsonParser::ObjectContext::CLOSING_CURLY() {
  return getToken(jsonParser::CLOSING_CURLY, 0);
}

jsonParser::MembersContext* jsonParser::ObjectContext::members() {
  return getRuleContext<jsonParser::MembersContext>(0);
}


size_t jsonParser::ObjectContext::getRuleIndex() const {
  return jsonParser::RuleObject;
}

void jsonParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void jsonParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


antlrcpp::Any jsonParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::ObjectContext* jsonParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 4, jsonParser::RuleObject);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(jsonParser::OPENING_CURLY);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == jsonParser::QUOTE_MARK) {
      setState(47);
      members();
    }
    setState(50);
    match(jsonParser::CLOSING_CURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembersContext ------------------------------------------------------------------

jsonParser::MembersContext::MembersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<jsonParser::MemberContext *> jsonParser::MembersContext::member() {
  return getRuleContexts<jsonParser::MemberContext>();
}

jsonParser::MemberContext* jsonParser::MembersContext::member(size_t i) {
  return getRuleContext<jsonParser::MemberContext>(i);
}

std::vector<tree::TerminalNode *> jsonParser::MembersContext::COMMA() {
  return getTokens(jsonParser::COMMA);
}

tree::TerminalNode* jsonParser::MembersContext::COMMA(size_t i) {
  return getToken(jsonParser::COMMA, i);
}


size_t jsonParser::MembersContext::getRuleIndex() const {
  return jsonParser::RuleMembers;
}

void jsonParser::MembersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembers(this);
}

void jsonParser::MembersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembers(this);
}


antlrcpp::Any jsonParser::MembersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitMembers(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::MembersContext* jsonParser::members() {
  MembersContext *_localctx = _tracker.createInstance<MembersContext>(_ctx, getState());
  enterRule(_localctx, 6, jsonParser::RuleMembers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    member();
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == jsonParser::COMMA) {
      setState(53);
      match(jsonParser::COMMA);
      setState(54);
      member();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberContext ------------------------------------------------------------------

jsonParser::MemberContext::MemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::StringContext* jsonParser::MemberContext::string() {
  return getRuleContext<jsonParser::StringContext>(0);
}

tree::TerminalNode* jsonParser::MemberContext::SEPARATOR() {
  return getToken(jsonParser::SEPARATOR, 0);
}

jsonParser::ValueContext* jsonParser::MemberContext::value() {
  return getRuleContext<jsonParser::ValueContext>(0);
}


size_t jsonParser::MemberContext::getRuleIndex() const {
  return jsonParser::RuleMember;
}

void jsonParser::MemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember(this);
}

void jsonParser::MemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember(this);
}


antlrcpp::Any jsonParser::MemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitMember(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::MemberContext* jsonParser::member() {
  MemberContext *_localctx = _tracker.createInstance<MemberContext>(_ctx, getState());
  enterRule(_localctx, 8, jsonParser::RuleMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    string();
    setState(61);
    match(jsonParser::SEPARATOR);
    setState(62);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

jsonParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::ArrayContext::LEFT_BRACKET() {
  return getToken(jsonParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* jsonParser::ArrayContext::RIGHT_BRACKET() {
  return getToken(jsonParser::RIGHT_BRACKET, 0);
}

jsonParser::ElementsContext* jsonParser::ArrayContext::elements() {
  return getRuleContext<jsonParser::ElementsContext>(0);
}


size_t jsonParser::ArrayContext::getRuleIndex() const {
  return jsonParser::RuleArray;
}

void jsonParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void jsonParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}


antlrcpp::Any jsonParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::ArrayContext* jsonParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 10, jsonParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(jsonParser::LEFT_BRACKET);
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << jsonParser::ZERO)
      | (1ULL << jsonParser::ONENINE)
      | (1ULL << jsonParser::OPENING_CURLY)
      | (1ULL << jsonParser::LEFT_BRACKET)
      | (1ULL << jsonParser::QUOTE_MARK)
      | (1ULL << jsonParser::TRUE_CONST)
      | (1ULL << jsonParser::FALSE_CONST)
      | (1ULL << jsonParser::NULL_VALUE)
      | (1ULL << jsonParser::PLUS)
      | (1ULL << jsonParser::MINUS))) != 0)) {
      setState(65);
      elements();
    }
    setState(68);
    match(jsonParser::RIGHT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementsContext ------------------------------------------------------------------

jsonParser::ElementsContext::ElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<jsonParser::ElementContext *> jsonParser::ElementsContext::element() {
  return getRuleContexts<jsonParser::ElementContext>();
}

jsonParser::ElementContext* jsonParser::ElementsContext::element(size_t i) {
  return getRuleContext<jsonParser::ElementContext>(i);
}

std::vector<tree::TerminalNode *> jsonParser::ElementsContext::COMMA() {
  return getTokens(jsonParser::COMMA);
}

tree::TerminalNode* jsonParser::ElementsContext::COMMA(size_t i) {
  return getToken(jsonParser::COMMA, i);
}


size_t jsonParser::ElementsContext::getRuleIndex() const {
  return jsonParser::RuleElements;
}

void jsonParser::ElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElements(this);
}

void jsonParser::ElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElements(this);
}


antlrcpp::Any jsonParser::ElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitElements(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::ElementsContext* jsonParser::elements() {
  ElementsContext *_localctx = _tracker.createInstance<ElementsContext>(_ctx, getState());
  enterRule(_localctx, 12, jsonParser::RuleElements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    element();
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == jsonParser::COMMA) {
      setState(71);
      match(jsonParser::COMMA);
      setState(72);
      element();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

jsonParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::ValueContext* jsonParser::ElementContext::value() {
  return getRuleContext<jsonParser::ValueContext>(0);
}


size_t jsonParser::ElementContext::getRuleIndex() const {
  return jsonParser::RuleElement;
}

void jsonParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void jsonParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


antlrcpp::Any jsonParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::ElementContext* jsonParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 14, jsonParser::RuleElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

jsonParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> jsonParser::StringContext::QUOTE_MARK() {
  return getTokens(jsonParser::QUOTE_MARK);
}

tree::TerminalNode* jsonParser::StringContext::QUOTE_MARK(size_t i) {
  return getToken(jsonParser::QUOTE_MARK, i);
}

jsonParser::CharactersContext* jsonParser::StringContext::characters() {
  return getRuleContext<jsonParser::CharactersContext>(0);
}


size_t jsonParser::StringContext::getRuleIndex() const {
  return jsonParser::RuleString;
}

void jsonParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void jsonParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any jsonParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::StringContext* jsonParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 16, jsonParser::RuleString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(jsonParser::QUOTE_MARK);
    setState(81);
    characters();
    setState(82);
    match(jsonParser::QUOTE_MARK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharactersContext ------------------------------------------------------------------

jsonParser::CharactersContext::CharactersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<jsonParser::CharacterContext *> jsonParser::CharactersContext::character() {
  return getRuleContexts<jsonParser::CharacterContext>();
}

jsonParser::CharacterContext* jsonParser::CharactersContext::character(size_t i) {
  return getRuleContext<jsonParser::CharacterContext>(i);
}


size_t jsonParser::CharactersContext::getRuleIndex() const {
  return jsonParser::RuleCharacters;
}

void jsonParser::CharactersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacters(this);
}

void jsonParser::CharactersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacters(this);
}


antlrcpp::Any jsonParser::CharactersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitCharacters(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::CharactersContext* jsonParser::characters() {
  CharactersContext *_localctx = _tracker.createInstance<CharactersContext>(_ctx, getState());
  enterRule(_localctx, 18, jsonParser::RuleCharacters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << jsonParser::DIGIT)
      | (1ULL << jsonParser::BACKSLASH)
      | (1ULL << jsonParser::LOWERCASE)
      | (1ULL << jsonParser::UPPERCASE))) != 0)) {
      setState(84);
      character();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterContext ------------------------------------------------------------------

jsonParser::CharacterContext::CharacterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::CharacterContext::LOWERCASE() {
  return getToken(jsonParser::LOWERCASE, 0);
}

tree::TerminalNode* jsonParser::CharacterContext::UPPERCASE() {
  return getToken(jsonParser::UPPERCASE, 0);
}

tree::TerminalNode* jsonParser::CharacterContext::DIGIT() {
  return getToken(jsonParser::DIGIT, 0);
}

tree::TerminalNode* jsonParser::CharacterContext::BACKSLASH() {
  return getToken(jsonParser::BACKSLASH, 0);
}

jsonParser::EscapeContext* jsonParser::CharacterContext::escape() {
  return getRuleContext<jsonParser::EscapeContext>(0);
}


size_t jsonParser::CharacterContext::getRuleIndex() const {
  return jsonParser::RuleCharacter;
}

void jsonParser::CharacterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacter(this);
}

void jsonParser::CharacterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacter(this);
}


antlrcpp::Any jsonParser::CharacterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitCharacter(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::CharacterContext* jsonParser::character() {
  CharacterContext *_localctx = _tracker.createInstance<CharacterContext>(_ctx, getState());
  enterRule(_localctx, 20, jsonParser::RuleCharacter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::LOWERCASE: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        match(jsonParser::LOWERCASE);
        break;
      }

      case jsonParser::UPPERCASE: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        match(jsonParser::UPPERCASE);
        break;
      }

      case jsonParser::DIGIT: {
        enterOuterAlt(_localctx, 3);
        setState(92);
        match(jsonParser::DIGIT);
        break;
      }

      case jsonParser::BACKSLASH: {
        enterOuterAlt(_localctx, 4);
        setState(93);
        match(jsonParser::BACKSLASH);
        setState(94);
        escape();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EscapeContext ------------------------------------------------------------------

jsonParser::EscapeContext::EscapeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::EscapeContext::BACKSLASH() {
  return getToken(jsonParser::BACKSLASH, 0);
}

tree::TerminalNode* jsonParser::EscapeContext::QUOTE_MARK() {
  return getToken(jsonParser::QUOTE_MARK, 0);
}

std::vector<tree::TerminalNode *> jsonParser::EscapeContext::HEX() {
  return getTokens(jsonParser::HEX);
}

tree::TerminalNode* jsonParser::EscapeContext::HEX(size_t i) {
  return getToken(jsonParser::HEX, i);
}


size_t jsonParser::EscapeContext::getRuleIndex() const {
  return jsonParser::RuleEscape;
}

void jsonParser::EscapeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEscape(this);
}

void jsonParser::EscapeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEscape(this);
}


antlrcpp::Any jsonParser::EscapeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitEscape(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::EscapeContext* jsonParser::escape() {
  EscapeContext *_localctx = _tracker.createInstance<EscapeContext>(_ctx, getState());
  enterRule(_localctx, 22, jsonParser::RuleEscape);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::BACKSLASH: {
        enterOuterAlt(_localctx, 1);
        setState(97);
        match(jsonParser::BACKSLASH);
        break;
      }

      case jsonParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(98);
        match(jsonParser::T__0);
        break;
      }

      case jsonParser::QUOTE_MARK: {
        enterOuterAlt(_localctx, 3);
        setState(99);
        match(jsonParser::QUOTE_MARK);
        break;
      }

      case jsonParser::T__1: {
        enterOuterAlt(_localctx, 4);
        setState(100);
        match(jsonParser::T__1);
        break;
      }

      case jsonParser::T__2: {
        enterOuterAlt(_localctx, 5);
        setState(101);
        match(jsonParser::T__2);
        break;
      }

      case jsonParser::T__3: {
        enterOuterAlt(_localctx, 6);
        setState(102);
        match(jsonParser::T__3);
        break;
      }

      case jsonParser::T__4: {
        enterOuterAlt(_localctx, 7);
        setState(103);
        match(jsonParser::T__4);
        break;
      }

      case jsonParser::T__5: {
        enterOuterAlt(_localctx, 8);
        setState(104);
        match(jsonParser::T__5);
        break;
      }

      case jsonParser::T__6: {
        enterOuterAlt(_localctx, 9);
        setState(105);
        match(jsonParser::T__6);
        setState(106);
        match(jsonParser::HEX);
        setState(107);
        match(jsonParser::HEX);
        setState(108);
        match(jsonParser::HEX);
        setState(109);
        match(jsonParser::HEX);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

jsonParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

jsonParser::RealContext* jsonParser::NumberContext::real() {
  return getRuleContext<jsonParser::RealContext>(0);
}

jsonParser::Signed_intContext* jsonParser::NumberContext::signed_int() {
  return getRuleContext<jsonParser::Signed_intContext>(0);
}

jsonParser::Unsigned_intContext* jsonParser::NumberContext::unsigned_int() {
  return getRuleContext<jsonParser::Unsigned_intContext>(0);
}


size_t jsonParser::NumberContext::getRuleIndex() const {
  return jsonParser::RuleNumber;
}

void jsonParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void jsonParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any jsonParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::NumberContext* jsonParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 24, jsonParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      real();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      signed_int();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(114);
      unsigned_int();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_intContext ------------------------------------------------------------------

jsonParser::Signed_intContext::Signed_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::Signed_intContext::MINUS() {
  return getToken(jsonParser::MINUS, 0);
}

jsonParser::Unsigned_intContext* jsonParser::Signed_intContext::unsigned_int() {
  return getRuleContext<jsonParser::Unsigned_intContext>(0);
}


size_t jsonParser::Signed_intContext::getRuleIndex() const {
  return jsonParser::RuleSigned_int;
}

void jsonParser::Signed_intContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSigned_int(this);
}

void jsonParser::Signed_intContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSigned_int(this);
}


antlrcpp::Any jsonParser::Signed_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitSigned_int(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::Signed_intContext* jsonParser::signed_int() {
  Signed_intContext *_localctx = _tracker.createInstance<Signed_intContext>(_ctx, getState());
  enterRule(_localctx, 26, jsonParser::RuleSigned_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(jsonParser::MINUS);
    setState(118);
    unsigned_int();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_intContext ------------------------------------------------------------------

jsonParser::Unsigned_intContext::Unsigned_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::Unsigned_intContext::ONENINE() {
  return getToken(jsonParser::ONENINE, 0);
}

tree::TerminalNode* jsonParser::Unsigned_intContext::PLUS() {
  return getToken(jsonParser::PLUS, 0);
}

std::vector<tree::TerminalNode *> jsonParser::Unsigned_intContext::DIGIT() {
  return getTokens(jsonParser::DIGIT);
}

tree::TerminalNode* jsonParser::Unsigned_intContext::DIGIT(size_t i) {
  return getToken(jsonParser::DIGIT, i);
}

tree::TerminalNode* jsonParser::Unsigned_intContext::ZERO() {
  return getToken(jsonParser::ZERO, 0);
}


size_t jsonParser::Unsigned_intContext::getRuleIndex() const {
  return jsonParser::RuleUnsigned_int;
}

void jsonParser::Unsigned_intContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsigned_int(this);
}

void jsonParser::Unsigned_intContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsigned_int(this);
}


antlrcpp::Any jsonParser::Unsigned_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitUnsigned_int(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::Unsigned_intContext* jsonParser::unsigned_int() {
  Unsigned_intContext *_localctx = _tracker.createInstance<Unsigned_intContext>(_ctx, getState());
  enterRule(_localctx, 28, jsonParser::RuleUnsigned_int);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::ONENINE:
      case jsonParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(121);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == jsonParser::PLUS) {
          setState(120);
          match(jsonParser::PLUS);
        }
        setState(123);
        match(jsonParser::ONENINE);
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == jsonParser::DIGIT) {
          setState(124);
          match(jsonParser::DIGIT);
          setState(129);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case jsonParser::ZERO: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        match(jsonParser::ZERO);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealContext ------------------------------------------------------------------

jsonParser::RealContext::RealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::RealContext::DEC_POINT() {
  return getToken(jsonParser::DEC_POINT, 0);
}

std::vector<jsonParser::Signed_intContext *> jsonParser::RealContext::signed_int() {
  return getRuleContexts<jsonParser::Signed_intContext>();
}

jsonParser::Signed_intContext* jsonParser::RealContext::signed_int(size_t i) {
  return getRuleContext<jsonParser::Signed_intContext>(i);
}

std::vector<jsonParser::Unsigned_intContext *> jsonParser::RealContext::unsigned_int() {
  return getRuleContexts<jsonParser::Unsigned_intContext>();
}

jsonParser::Unsigned_intContext* jsonParser::RealContext::unsigned_int(size_t i) {
  return getRuleContext<jsonParser::Unsigned_intContext>(i);
}

std::vector<tree::TerminalNode *> jsonParser::RealContext::DIGIT() {
  return getTokens(jsonParser::DIGIT);
}

tree::TerminalNode* jsonParser::RealContext::DIGIT(size_t i) {
  return getToken(jsonParser::DIGIT, i);
}

tree::TerminalNode* jsonParser::RealContext::EXPONENT() {
  return getToken(jsonParser::EXPONENT, 0);
}


size_t jsonParser::RealContext::getRuleIndex() const {
  return jsonParser::RuleReal;
}

void jsonParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}

void jsonParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}


antlrcpp::Any jsonParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::RealContext* jsonParser::real() {
  RealContext *_localctx = _tracker.createInstance<RealContext>(_ctx, getState());
  enterRule(_localctx, 30, jsonParser::RuleReal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case jsonParser::MINUS: {
        setState(133);
        signed_int();
        break;
      }

      case jsonParser::ZERO:
      case jsonParser::ONENINE:
      case jsonParser::PLUS: {
        setState(134);
        unsigned_int();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(137);
    match(jsonParser::DEC_POINT);
    setState(139); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(138);
      match(jsonParser::DIGIT);
      setState(141); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == jsonParser::DIGIT);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == jsonParser::EXPONENT) {
      setState(143);
      match(jsonParser::EXPONENT);
      setState(146);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case jsonParser::MINUS: {
          setState(144);
          signed_int();
          break;
        }

        case jsonParser::ZERO:
        case jsonParser::ONENINE:
        case jsonParser::PLUS: {
          setState(145);
          unsigned_int();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_valContext ------------------------------------------------------------------

jsonParser::Bool_valContext::Bool_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::Bool_valContext::TRUE_CONST() {
  return getToken(jsonParser::TRUE_CONST, 0);
}

tree::TerminalNode* jsonParser::Bool_valContext::FALSE_CONST() {
  return getToken(jsonParser::FALSE_CONST, 0);
}


size_t jsonParser::Bool_valContext::getRuleIndex() const {
  return jsonParser::RuleBool_val;
}

void jsonParser::Bool_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_val(this);
}

void jsonParser::Bool_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_val(this);
}


antlrcpp::Any jsonParser::Bool_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitBool_val(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::Bool_valContext* jsonParser::bool_val() {
  Bool_valContext *_localctx = _tracker.createInstance<Bool_valContext>(_ctx, getState());
  enterRule(_localctx, 32, jsonParser::RuleBool_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _la = _input->LA(1);
    if (!(_la == jsonParser::TRUE_CONST

    || _la == jsonParser::FALSE_CONST)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Null_valueContext ------------------------------------------------------------------

jsonParser::Null_valueContext::Null_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* jsonParser::Null_valueContext::NULL_VALUE() {
  return getToken(jsonParser::NULL_VALUE, 0);
}


size_t jsonParser::Null_valueContext::getRuleIndex() const {
  return jsonParser::RuleNull_value;
}

void jsonParser::Null_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNull_value(this);
}

void jsonParser::Null_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<jsonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNull_value(this);
}


antlrcpp::Any jsonParser::Null_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<jsonVisitor*>(visitor))
    return parserVisitor->visitNull_value(this);
  else
    return visitor->visitChildren(this);
}

jsonParser::Null_valueContext* jsonParser::null_value() {
  Null_valueContext *_localctx = _tracker.createInstance<Null_valueContext>(_ctx, getState());
  enterRule(_localctx, 34, jsonParser::RuleNull_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(jsonParser::NULL_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> jsonParser::_decisionToDFA;
atn::PredictionContextCache jsonParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN jsonParser::_atn;
std::vector<uint16_t> jsonParser::_serializedATN;

std::vector<std::string> jsonParser::_ruleNames = {
  "json", "value", "object", "members", "member", "array", "elements", "element", 
  "string", "characters", "character", "escape", "number", "signed_int", 
  "unsigned_int", "real", "bool_val", "null_value"
};

std::vector<std::string> jsonParser::_literalNames = {
  "", "'/'", "'b'", "'f'", "'n'", "'r'", "'t'", "'u'", "", "'0'", "", "", 
  "'{'", "'}'", "'['", "']'", "','", "':'", "'\"'", "'\\'", "'true'", "'false'", 
  "'null_value'", "'+'", "'-'", "", "", "", "'.'"
};

std::vector<std::string> jsonParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "EXPONENT", "ZERO", "ONENINE", "DIGIT", 
  "OPENING_CURLY", "CLOSING_CURLY", "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA", 
  "SEPARATOR", "QUOTE_MARK", "BACKSLASH", "TRUE_CONST", "FALSE_CONST", "NULL_VALUE", 
  "PLUS", "MINUS", "LOWERCASE", "UPPERCASE", "HEX", "DEC_POINT", "WS"
};

dfa::Vocabulary jsonParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> jsonParser::_tokenNames;

jsonParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0x9d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2f, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x33, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x3a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x3d, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x45, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x4f, 0xb, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x7, 0xb, 0x58, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x5b, 0xb, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x62, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x71, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x76, 0xa, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x5, 0x10, 0x7c, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x80, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x83, 
    0xb, 0x10, 0x3, 0x10, 0x5, 0x10, 0x86, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x8a, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x8e, 0xa, 
    0x11, 0xd, 0x11, 0xe, 0x11, 0x8f, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x95, 0xa, 0x11, 0x5, 0x11, 0x97, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x2, 0x2, 0x14, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x2, 0x3, 0x3, 0x2, 0x16, 0x17, 0x2, 0xa8, 0x2, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0xe, 0x48, 0x3, 0x2, 0x2, 0x2, 0x10, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x52, 0x3, 0x2, 0x2, 0x2, 0x14, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x61, 0x3, 0x2, 0x2, 0x2, 0x18, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x85, 0x3, 0x2, 0x2, 0x2, 0x20, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x98, 0x3, 0x2, 0x2, 0x2, 0x24, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x27, 0x5, 0x4, 0x3, 0x2, 0x27, 0x3, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2f, 
    0x5, 0x6, 0x4, 0x2, 0x29, 0x2f, 0x5, 0xc, 0x7, 0x2, 0x2a, 0x2f, 0x5, 
    0x12, 0xa, 0x2, 0x2b, 0x2f, 0x5, 0x1a, 0xe, 0x2, 0x2c, 0x2f, 0x5, 0x22, 
    0x12, 0x2, 0x2d, 0x2f, 0x5, 0x24, 0x13, 0x2, 0x2e, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 
    0x7, 0xe, 0x2, 0x2, 0x31, 0x33, 0x5, 0x8, 0x5, 0x2, 0x32, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x7, 0xf, 0x2, 0x2, 0x35, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x3b, 0x5, 0xa, 0x6, 0x2, 0x37, 0x38, 0x7, 0x12, 0x2, 0x2, 
    0x38, 0x3a, 0x5, 0xa, 0x6, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x40, 0x7, 0x13, 
    0x2, 0x2, 0x40, 0x41, 0x5, 0x4, 0x3, 0x2, 0x41, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x44, 0x7, 0x10, 0x2, 0x2, 0x43, 0x45, 0x5, 0xe, 0x8, 0x2, 
    0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x11, 0x2, 0x2, 0x47, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x4d, 0x5, 0x10, 0x9, 0x2, 0x49, 0x4a, 0x7, 
    0x12, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0x10, 0x9, 0x2, 0x4b, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0x4, 0x3, 0x2, 0x51, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x14, 0x2, 0x2, 0x53, 0x54, 
    0x5, 0x14, 0xb, 0x2, 0x54, 0x55, 0x7, 0x14, 0x2, 0x2, 0x55, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x58, 0x5, 0x16, 0xc, 0x2, 0x57, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x62, 0x7, 0x1b, 0x2, 0x2, 0x5d, 
    0x62, 0x7, 0x1c, 0x2, 0x2, 0x5e, 0x62, 0x7, 0xd, 0x2, 0x2, 0x5f, 0x60, 
    0x7, 0x15, 0x2, 0x2, 0x60, 0x62, 0x5, 0x18, 0xd, 0x2, 0x61, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x71, 0x7, 0x15, 0x2, 0x2, 0x64, 0x71, 0x7, 0x3, 0x2, 0x2, 
    0x65, 0x71, 0x7, 0x14, 0x2, 0x2, 0x66, 0x71, 0x7, 0x4, 0x2, 0x2, 0x67, 
    0x71, 0x7, 0x5, 0x2, 0x2, 0x68, 0x71, 0x7, 0x6, 0x2, 0x2, 0x69, 0x71, 
    0x7, 0x7, 0x2, 0x2, 0x6a, 0x71, 0x7, 0x8, 0x2, 0x2, 0x6b, 0x6c, 0x7, 
    0x9, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x1d, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x1d, 
    0x2, 0x2, 0x6e, 0x6f, 0x7, 0x1d, 0x2, 0x2, 0x6f, 0x71, 0x7, 0x1d, 0x2, 
    0x2, 0x70, 0x63, 0x3, 0x2, 0x2, 0x2, 0x70, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x65, 0x3, 0x2, 0x2, 0x2, 0x70, 0x66, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x70, 0x68, 0x3, 0x2, 0x2, 0x2, 0x70, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x19, 0x3, 0x2, 0x2, 0x2, 0x72, 0x76, 0x5, 0x20, 
    0x11, 0x2, 0x73, 0x76, 0x5, 0x1c, 0xf, 0x2, 0x74, 0x76, 0x5, 0x1e, 0x10, 
    0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x78, 0x7, 0x1a, 0x2, 0x2, 0x78, 0x79, 0x5, 0x1e, 0x10, 0x2, 0x79, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x7, 0x19, 0x2, 0x2, 0x7b, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x81, 0x7, 0xc, 0x2, 0x2, 0x7e, 0x80, 0x7, 0xd, 0x2, 
    0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 
    0x7, 0xb, 0x2, 0x2, 0x85, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x85, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x5, 0x1c, 
    0xf, 0x2, 0x88, 0x8a, 0x5, 0x1e, 0x10, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8d, 0x7, 0x1e, 0x2, 0x2, 0x8c, 0x8e, 0x7, 0xd, 0x2, 0x2, 0x8d, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x94, 0x7, 0xa, 0x2, 0x2, 0x92, 0x95, 0x5, 0x1c, 
    0xf, 0x2, 0x93, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x91, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x9, 0x2, 0x2, 0x2, 0x99, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x18, 0x2, 0x2, 0x9b, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x2e, 0x32, 0x3b, 0x44, 0x4d, 0x59, 0x61, 0x70, 
    0x75, 0x7b, 0x81, 0x85, 0x89, 0x8f, 0x94, 0x96, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

jsonParser::Initializer jsonParser::_init;
