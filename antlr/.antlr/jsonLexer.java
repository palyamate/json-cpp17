// Generated from /home/palya/CLionProjects/json-cpp17/antlr/json.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class jsonLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "EXPONENT", "ZERO", 
		"ONENINE", "DIGIT", "OPENING_CURLY", "CLOSING_CURLY", "LEFT_BRACKET", 
		"RIGHT_BRACKET", "COMMA", "SEPARATOR", "QUOTE_MARK", "BACKSLASH", "TRUE_CONST", 
		"FALSE_CONST", "NULL_VALUE", "PLUS", "MINUS", "LOWERCASE", "UPPERCASE", 
		"HEX", "DEC_POINT", "WS"
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


	public jsonLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "json.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\37\u0090\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\3\2\3\2\3\3\3"+
		"\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3"+
		"\f\3\f\5\fT\n\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3"+
		"\22\3\23\3\23\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3"+
		"\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3"+
		"\30\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\5\34\u0086\n\34\3\35\3\35"+
		"\3\36\6\36\u008b\n\36\r\36\16\36\u008c\3\36\3\36\2\2\37\3\3\5\4\7\5\t"+
		"\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23"+
		"%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37\3\2\5\4\2GG"+
		"gg\4\2CHch\5\2\13\f\17\17\"\"\2\u0092\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2"+
		"\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2"+
		"\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3"+
		"\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3"+
		"\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65"+
		"\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\3=\3\2\2\2\5?\3\2\2\2\7A\3"+
		"\2\2\2\tC\3\2\2\2\13E\3\2\2\2\rG\3\2\2\2\17I\3\2\2\2\21K\3\2\2\2\23M\3"+
		"\2\2\2\25O\3\2\2\2\27S\3\2\2\2\31U\3\2\2\2\33W\3\2\2\2\35Y\3\2\2\2\37"+
		"[\3\2\2\2!]\3\2\2\2#_\3\2\2\2%a\3\2\2\2\'c\3\2\2\2)e\3\2\2\2+j\3\2\2\2"+
		"-p\3\2\2\2/{\3\2\2\2\61}\3\2\2\2\63\177\3\2\2\2\65\u0081\3\2\2\2\67\u0085"+
		"\3\2\2\29\u0087\3\2\2\2;\u008a\3\2\2\2=>\7\61\2\2>\4\3\2\2\2?@\7d\2\2"+
		"@\6\3\2\2\2AB\7h\2\2B\b\3\2\2\2CD\7p\2\2D\n\3\2\2\2EF\7t\2\2F\f\3\2\2"+
		"\2GH\7v\2\2H\16\3\2\2\2IJ\7w\2\2J\20\3\2\2\2KL\t\2\2\2L\22\3\2\2\2MN\7"+
		"\62\2\2N\24\3\2\2\2OP\4\63;\2P\26\3\2\2\2QT\5\23\n\2RT\5\25\13\2SQ\3\2"+
		"\2\2SR\3\2\2\2T\30\3\2\2\2UV\7}\2\2V\32\3\2\2\2WX\7\177\2\2X\34\3\2\2"+
		"\2YZ\7]\2\2Z\36\3\2\2\2[\\\7_\2\2\\ \3\2\2\2]^\7.\2\2^\"\3\2\2\2_`\7<"+
		"\2\2`$\3\2\2\2ab\7$\2\2b&\3\2\2\2cd\7^\2\2d(\3\2\2\2ef\7v\2\2fg\7t\2\2"+
		"gh\7w\2\2hi\7g\2\2i*\3\2\2\2jk\7h\2\2kl\7c\2\2lm\7n\2\2mn\7u\2\2no\7g"+
		"\2\2o,\3\2\2\2pq\7p\2\2qr\7w\2\2rs\7n\2\2st\7n\2\2tu\7a\2\2uv\7x\2\2v"+
		"w\7c\2\2wx\7n\2\2xy\7w\2\2yz\7g\2\2z.\3\2\2\2{|\7-\2\2|\60\3\2\2\2}~\7"+
		"/\2\2~\62\3\2\2\2\177\u0080\4c|\2\u0080\64\3\2\2\2\u0081\u0082\4C\\\2"+
		"\u0082\66\3\2\2\2\u0083\u0086\5\27\f\2\u0084\u0086\t\3\2\2\u0085\u0083"+
		"\3\2\2\2\u0085\u0084\3\2\2\2\u00868\3\2\2\2\u0087\u0088\7\60\2\2\u0088"+
		":\3\2\2\2\u0089\u008b\t\4\2\2\u008a\u0089\3\2\2\2\u008b\u008c\3\2\2\2"+
		"\u008c\u008a\3\2\2\2\u008c\u008d\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u008f"+
		"\b\36\2\2\u008f<\3\2\2\2\6\2S\u0085\u008c\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}