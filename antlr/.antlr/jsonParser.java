// Generated from /home/palya/CLionProjects/json-cpp17/antlr/json.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class jsonParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, EXPONENT=8, ZERO=9, 
		ONENINE=10, DIGIT=11, OPENING_CURLY=12, CLOSING_CURLY=13, LEFT_BRACKET=14, 
		RIGHT_BRACKET=15, COMMA=16, SEPARATOR=17, QUOTE_MARK=18, BACKSLASH=19, 
		TRUE_CONST=20, FALSE_CONST=21, NULL_VALUE=22, PLUS=23, MINUS=24, LOWERCASE=25, 
		UPPERCASE=26, HEX=27, DEC_POINT=28, WS=29;
	public static final int
		RULE_json = 0, RULE_value = 1, RULE_object = 2, RULE_members = 3, RULE_member = 4, 
		RULE_array = 5, RULE_elements = 6, RULE_element = 7, RULE_string = 8, 
		RULE_characters = 9, RULE_character = 10, RULE_escape = 11, RULE_number = 12, 
		RULE_signed_int = 13, RULE_unsigned_int = 14, RULE_real = 15, RULE_bool_val = 16, 
		RULE_null_value = 17;
	public static final String[] ruleNames = {
		"json", "value", "object", "members", "member", "array", "elements", "element", 
		"string", "characters", "character", "escape", "number", "signed_int", 
		"unsigned_int", "real", "bool_val", "null_value"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'/'", "'b'", "'f'", "'n'", "'r'", "'t'", "'u'", null, "'0'", null, 
		null, "'{'", "'}'", "'['", "']'", "','", "':'", "'\"'", "'\\'", "'true'", 
		"'false'", "'null_value'", "'+'", "'-'", null, null, null, "'.'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, "EXPONENT", "ZERO", "ONENINE", 
		"DIGIT", "OPENING_CURLY", "CLOSING_CURLY", "LEFT_BRACKET", "RIGHT_BRACKET", 
		"COMMA", "SEPARATOR", "QUOTE_MARK", "BACKSLASH", "TRUE_CONST", "FALSE_CONST", 
		"NULL_VALUE", "PLUS", "MINUS", "LOWERCASE", "UPPERCASE", "HEX", "DEC_POINT", 
		"WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "json.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public jsonParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class JsonContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public JsonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_json; }
	}

	public final JsonContext json() throws RecognitionException {
		JsonContext _localctx = new JsonContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_json);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueContext extends ParserRuleContext {
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public Bool_valContext bool_val() {
			return getRuleContext(Bool_valContext.class,0);
		}
		public Null_valueContext null_value() {
			return getRuleContext(Null_valueContext.class,0);
		}
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_value);
		try {
			setState(44);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENING_CURLY:
				enterOuterAlt(_localctx, 1);
				{
				setState(38);
				object();
				}
				break;
			case LEFT_BRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(39);
				array();
				}
				break;
			case QUOTE_MARK:
				enterOuterAlt(_localctx, 3);
				{
				setState(40);
				string();
				}
				break;
			case ZERO:
			case ONENINE:
			case PLUS:
			case MINUS:
				enterOuterAlt(_localctx, 4);
				{
				setState(41);
				number();
				}
				break;
			case TRUE_CONST:
			case FALSE_CONST:
				enterOuterAlt(_localctx, 5);
				{
				setState(42);
				bool_val();
				}
				break;
			case NULL_VALUE:
				enterOuterAlt(_localctx, 6);
				{
				setState(43);
				null_value();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ObjectContext extends ParserRuleContext {
		public TerminalNode OPENING_CURLY() { return getToken(jsonParser.OPENING_CURLY, 0); }
		public TerminalNode CLOSING_CURLY() { return getToken(jsonParser.CLOSING_CURLY, 0); }
		public MembersContext members() {
			return getRuleContext(MembersContext.class,0);
		}
		public ObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_object; }
	}

	public final ObjectContext object() throws RecognitionException {
		ObjectContext _localctx = new ObjectContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_object);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			match(OPENING_CURLY);
			setState(48);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==QUOTE_MARK) {
				{
				setState(47);
				members();
				}
			}

			setState(50);
			match(CLOSING_CURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MembersContext extends ParserRuleContext {
		public List<MemberContext> member() {
			return getRuleContexts(MemberContext.class);
		}
		public MemberContext member(int i) {
			return getRuleContext(MemberContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(jsonParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(jsonParser.COMMA, i);
		}
		public MembersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_members; }
	}

	public final MembersContext members() throws RecognitionException {
		MembersContext _localctx = new MembersContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			member();
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(53);
				match(COMMA);
				setState(54);
				member();
				}
				}
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberContext extends ParserRuleContext {
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public TerminalNode SEPARATOR() { return getToken(jsonParser.SEPARATOR, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public MemberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_member; }
	}

	public final MemberContext member() throws RecognitionException {
		MemberContext _localctx = new MemberContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_member);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			string();
			setState(61);
			match(SEPARATOR);
			setState(62);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArrayContext extends ParserRuleContext {
		public TerminalNode LEFT_BRACKET() { return getToken(jsonParser.LEFT_BRACKET, 0); }
		public TerminalNode RIGHT_BRACKET() { return getToken(jsonParser.RIGHT_BRACKET, 0); }
		public ElementsContext elements() {
			return getRuleContext(ElementsContext.class,0);
		}
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_array);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			match(LEFT_BRACKET);
			setState(66);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ZERO) | (1L << ONENINE) | (1L << OPENING_CURLY) | (1L << LEFT_BRACKET) | (1L << QUOTE_MARK) | (1L << TRUE_CONST) | (1L << FALSE_CONST) | (1L << NULL_VALUE) | (1L << PLUS) | (1L << MINUS))) != 0)) {
				{
				setState(65);
				elements();
				}
			}

			setState(68);
			match(RIGHT_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementsContext extends ParserRuleContext {
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(jsonParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(jsonParser.COMMA, i);
		}
		public ElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elements; }
	}

	public final ElementsContext elements() throws RecognitionException {
		ElementsContext _localctx = new ElementsContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_elements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			element();
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(71);
				match(COMMA);
				setState(72);
				element();
				}
				}
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(78);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringContext extends ParserRuleContext {
		public List<TerminalNode> QUOTE_MARK() { return getTokens(jsonParser.QUOTE_MARK); }
		public TerminalNode QUOTE_MARK(int i) {
			return getToken(jsonParser.QUOTE_MARK, i);
		}
		public CharactersContext characters() {
			return getRuleContext(CharactersContext.class,0);
		}
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			match(QUOTE_MARK);
			setState(81);
			characters();
			setState(82);
			match(QUOTE_MARK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CharactersContext extends ParserRuleContext {
		public List<CharacterContext> character() {
			return getRuleContexts(CharacterContext.class);
		}
		public CharacterContext character(int i) {
			return getRuleContext(CharacterContext.class,i);
		}
		public CharactersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characters; }
	}

	public final CharactersContext characters() throws RecognitionException {
		CharactersContext _localctx = new CharactersContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_characters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DIGIT) | (1L << BACKSLASH) | (1L << LOWERCASE) | (1L << UPPERCASE))) != 0)) {
				{
				{
				setState(84);
				character();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CharacterContext extends ParserRuleContext {
		public TerminalNode LOWERCASE() { return getToken(jsonParser.LOWERCASE, 0); }
		public TerminalNode UPPERCASE() { return getToken(jsonParser.UPPERCASE, 0); }
		public TerminalNode DIGIT() { return getToken(jsonParser.DIGIT, 0); }
		public TerminalNode BACKSLASH() { return getToken(jsonParser.BACKSLASH, 0); }
		public EscapeContext escape() {
			return getRuleContext(EscapeContext.class,0);
		}
		public CharacterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_character; }
	}

	public final CharacterContext character() throws RecognitionException {
		CharacterContext _localctx = new CharacterContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_character);
		try {
			setState(95);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LOWERCASE:
				enterOuterAlt(_localctx, 1);
				{
				setState(90);
				match(LOWERCASE);
				}
				break;
			case UPPERCASE:
				enterOuterAlt(_localctx, 2);
				{
				setState(91);
				match(UPPERCASE);
				}
				break;
			case DIGIT:
				enterOuterAlt(_localctx, 3);
				{
				setState(92);
				match(DIGIT);
				}
				break;
			case BACKSLASH:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(93);
				match(BACKSLASH);
				setState(94);
				escape();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EscapeContext extends ParserRuleContext {
		public TerminalNode BACKSLASH() { return getToken(jsonParser.BACKSLASH, 0); }
		public TerminalNode QUOTE_MARK() { return getToken(jsonParser.QUOTE_MARK, 0); }
		public List<TerminalNode> HEX() { return getTokens(jsonParser.HEX); }
		public TerminalNode HEX(int i) {
			return getToken(jsonParser.HEX, i);
		}
		public EscapeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_escape; }
	}

	public final EscapeContext escape() throws RecognitionException {
		EscapeContext _localctx = new EscapeContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_escape);
		try {
			setState(110);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BACKSLASH:
				enterOuterAlt(_localctx, 1);
				{
				setState(97);
				match(BACKSLASH);
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 2);
				{
				setState(98);
				match(T__0);
				}
				break;
			case QUOTE_MARK:
				enterOuterAlt(_localctx, 3);
				{
				setState(99);
				match(QUOTE_MARK);
				}
				break;
			case T__1:
				enterOuterAlt(_localctx, 4);
				{
				setState(100);
				match(T__1);
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 5);
				{
				setState(101);
				match(T__2);
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 6);
				{
				setState(102);
				match(T__3);
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 7);
				{
				setState(103);
				match(T__4);
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 8);
				{
				setState(104);
				match(T__5);
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 9);
				{
				setState(105);
				match(T__6);
				setState(106);
				match(HEX);
				setState(107);
				match(HEX);
				setState(108);
				match(HEX);
				setState(109);
				match(HEX);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public RealContext real() {
			return getRuleContext(RealContext.class,0);
		}
		public Signed_intContext signed_int() {
			return getRuleContext(Signed_intContext.class,0);
		}
		public Unsigned_intContext unsigned_int() {
			return getRuleContext(Unsigned_intContext.class,0);
		}
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_number);
		try {
			setState(115);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(112);
				real();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(113);
				signed_int();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(114);
				unsigned_int();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Signed_intContext extends ParserRuleContext {
		public TerminalNode MINUS() { return getToken(jsonParser.MINUS, 0); }
		public Unsigned_intContext unsigned_int() {
			return getRuleContext(Unsigned_intContext.class,0);
		}
		public Signed_intContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signed_int; }
	}

	public final Signed_intContext signed_int() throws RecognitionException {
		Signed_intContext _localctx = new Signed_intContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_signed_int);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			match(MINUS);
			setState(118);
			unsigned_int();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Unsigned_intContext extends ParserRuleContext {
		public TerminalNode ONENINE() { return getToken(jsonParser.ONENINE, 0); }
		public TerminalNode PLUS() { return getToken(jsonParser.PLUS, 0); }
		public List<TerminalNode> DIGIT() { return getTokens(jsonParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(jsonParser.DIGIT, i);
		}
		public TerminalNode ZERO() { return getToken(jsonParser.ZERO, 0); }
		public Unsigned_intContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsigned_int; }
	}

	public final Unsigned_intContext unsigned_int() throws RecognitionException {
		Unsigned_intContext _localctx = new Unsigned_intContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_unsigned_int);
		int _la;
		try {
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ONENINE:
			case PLUS:
				enterOuterAlt(_localctx, 1);
				{
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==PLUS) {
					{
					setState(120);
					match(PLUS);
					}
				}

				setState(123);
				match(ONENINE);
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==DIGIT) {
					{
					{
					setState(124);
					match(DIGIT);
					}
					}
					setState(129);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case ZERO:
				enterOuterAlt(_localctx, 2);
				{
				setState(130);
				match(ZERO);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RealContext extends ParserRuleContext {
		public TerminalNode DEC_POINT() { return getToken(jsonParser.DEC_POINT, 0); }
		public List<Signed_intContext> signed_int() {
			return getRuleContexts(Signed_intContext.class);
		}
		public Signed_intContext signed_int(int i) {
			return getRuleContext(Signed_intContext.class,i);
		}
		public List<Unsigned_intContext> unsigned_int() {
			return getRuleContexts(Unsigned_intContext.class);
		}
		public Unsigned_intContext unsigned_int(int i) {
			return getRuleContext(Unsigned_intContext.class,i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(jsonParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(jsonParser.DIGIT, i);
		}
		public TerminalNode EXPONENT() { return getToken(jsonParser.EXPONENT, 0); }
		public RealContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_real; }
	}

	public final RealContext real() throws RecognitionException {
		RealContext _localctx = new RealContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_real);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MINUS:
				{
				setState(133);
				signed_int();
				}
				break;
			case ZERO:
			case ONENINE:
			case PLUS:
				{
				setState(134);
				unsigned_int();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(137);
			match(DEC_POINT);
			setState(139); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(138);
				match(DIGIT);
				}
				}
				setState(141); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EXPONENT) {
				{
				setState(143);
				match(EXPONENT);
				setState(146);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case MINUS:
					{
					setState(144);
					signed_int();
					}
					break;
				case ZERO:
				case ONENINE:
				case PLUS:
					{
					setState(145);
					unsigned_int();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Bool_valContext extends ParserRuleContext {
		public TerminalNode TRUE_CONST() { return getToken(jsonParser.TRUE_CONST, 0); }
		public TerminalNode FALSE_CONST() { return getToken(jsonParser.FALSE_CONST, 0); }
		public Bool_valContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bool_val; }
	}

	public final Bool_valContext bool_val() throws RecognitionException {
		Bool_valContext _localctx = new Bool_valContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_bool_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			_la = _input.LA(1);
			if ( !(_la==TRUE_CONST || _la==FALSE_CONST) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Null_valueContext extends ParserRuleContext {
		public TerminalNode NULL_VALUE() { return getToken(jsonParser.NULL_VALUE, 0); }
		public Null_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_null_value; }
	}

	public final Null_valueContext null_value() throws RecognitionException {
		Null_valueContext _localctx = new Null_valueContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_null_value);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			match(NULL_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\37\u009d\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\5\3/\n\3\3\4\3\4\5\4\63\n\4"+
		"\3\4\3\4\3\5\3\5\3\5\7\5:\n\5\f\5\16\5=\13\5\3\6\3\6\3\6\3\6\3\7\3\7\5"+
		"\7E\n\7\3\7\3\7\3\b\3\b\3\b\7\bL\n\b\f\b\16\bO\13\b\3\t\3\t\3\n\3\n\3"+
		"\n\3\n\3\13\7\13X\n\13\f\13\16\13[\13\13\3\f\3\f\3\f\3\f\3\f\5\fb\n\f"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\rq\n\r\3\16\3\16"+
		"\3\16\5\16v\n\16\3\17\3\17\3\17\3\20\5\20|\n\20\3\20\3\20\7\20\u0080\n"+
		"\20\f\20\16\20\u0083\13\20\3\20\5\20\u0086\n\20\3\21\3\21\5\21\u008a\n"+
		"\21\3\21\3\21\6\21\u008e\n\21\r\21\16\21\u008f\3\21\3\21\3\21\5\21\u0095"+
		"\n\21\5\21\u0097\n\21\3\22\3\22\3\23\3\23\3\23\2\2\24\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\32\34\36 \"$\2\3\3\2\26\27\2\u00a8\2&\3\2\2\2\4.\3\2\2\2"+
		"\6\60\3\2\2\2\b\66\3\2\2\2\n>\3\2\2\2\fB\3\2\2\2\16H\3\2\2\2\20P\3\2\2"+
		"\2\22R\3\2\2\2\24Y\3\2\2\2\26a\3\2\2\2\30p\3\2\2\2\32u\3\2\2\2\34w\3\2"+
		"\2\2\36\u0085\3\2\2\2 \u0089\3\2\2\2\"\u0098\3\2\2\2$\u009a\3\2\2\2&\'"+
		"\5\4\3\2\'\3\3\2\2\2(/\5\6\4\2)/\5\f\7\2*/\5\22\n\2+/\5\32\16\2,/\5\""+
		"\22\2-/\5$\23\2.(\3\2\2\2.)\3\2\2\2.*\3\2\2\2.+\3\2\2\2.,\3\2\2\2.-\3"+
		"\2\2\2/\5\3\2\2\2\60\62\7\16\2\2\61\63\5\b\5\2\62\61\3\2\2\2\62\63\3\2"+
		"\2\2\63\64\3\2\2\2\64\65\7\17\2\2\65\7\3\2\2\2\66;\5\n\6\2\678\7\22\2"+
		"\28:\5\n\6\29\67\3\2\2\2:=\3\2\2\2;9\3\2\2\2;<\3\2\2\2<\t\3\2\2\2=;\3"+
		"\2\2\2>?\5\22\n\2?@\7\23\2\2@A\5\4\3\2A\13\3\2\2\2BD\7\20\2\2CE\5\16\b"+
		"\2DC\3\2\2\2DE\3\2\2\2EF\3\2\2\2FG\7\21\2\2G\r\3\2\2\2HM\5\20\t\2IJ\7"+
		"\22\2\2JL\5\20\t\2KI\3\2\2\2LO\3\2\2\2MK\3\2\2\2MN\3\2\2\2N\17\3\2\2\2"+
		"OM\3\2\2\2PQ\5\4\3\2Q\21\3\2\2\2RS\7\24\2\2ST\5\24\13\2TU\7\24\2\2U\23"+
		"\3\2\2\2VX\5\26\f\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z\25\3\2\2"+
		"\2[Y\3\2\2\2\\b\7\33\2\2]b\7\34\2\2^b\7\r\2\2_`\7\25\2\2`b\5\30\r\2a\\"+
		"\3\2\2\2a]\3\2\2\2a^\3\2\2\2a_\3\2\2\2b\27\3\2\2\2cq\7\25\2\2dq\7\3\2"+
		"\2eq\7\24\2\2fq\7\4\2\2gq\7\5\2\2hq\7\6\2\2iq\7\7\2\2jq\7\b\2\2kl\7\t"+
		"\2\2lm\7\35\2\2mn\7\35\2\2no\7\35\2\2oq\7\35\2\2pc\3\2\2\2pd\3\2\2\2p"+
		"e\3\2\2\2pf\3\2\2\2pg\3\2\2\2ph\3\2\2\2pi\3\2\2\2pj\3\2\2\2pk\3\2\2\2"+
		"q\31\3\2\2\2rv\5 \21\2sv\5\34\17\2tv\5\36\20\2ur\3\2\2\2us\3\2\2\2ut\3"+
		"\2\2\2v\33\3\2\2\2wx\7\32\2\2xy\5\36\20\2y\35\3\2\2\2z|\7\31\2\2{z\3\2"+
		"\2\2{|\3\2\2\2|}\3\2\2\2}\u0081\7\f\2\2~\u0080\7\r\2\2\177~\3\2\2\2\u0080"+
		"\u0083\3\2\2\2\u0081\177\3\2\2\2\u0081\u0082\3\2\2\2\u0082\u0086\3\2\2"+
		"\2\u0083\u0081\3\2\2\2\u0084\u0086\7\13\2\2\u0085{\3\2\2\2\u0085\u0084"+
		"\3\2\2\2\u0086\37\3\2\2\2\u0087\u008a\5\34\17\2\u0088\u008a\5\36\20\2"+
		"\u0089\u0087\3\2\2\2\u0089\u0088\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008d"+
		"\7\36\2\2\u008c\u008e\7\r\2\2\u008d\u008c\3\2\2\2\u008e\u008f\3\2\2\2"+
		"\u008f\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u0096\3\2\2\2\u0091\u0094"+
		"\7\n\2\2\u0092\u0095\5\34\17\2\u0093\u0095\5\36\20\2\u0094\u0092\3\2\2"+
		"\2\u0094\u0093\3\2\2\2\u0095\u0097\3\2\2\2\u0096\u0091\3\2\2\2\u0096\u0097"+
		"\3\2\2\2\u0097!\3\2\2\2\u0098\u0099\t\2\2\2\u0099#\3\2\2\2\u009a\u009b"+
		"\7\30\2\2\u009b%\3\2\2\2\22.\62;DMYapu{\u0081\u0085\u0089\u008f\u0094"+
		"\u0096";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}