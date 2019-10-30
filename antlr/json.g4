grammar json;

json: 
    value;

value:
    object      |
    array       |
    string      |
    number      |
    bool_val    |
    null_value;

object:
    OPENING_CURLY
    members ?
    CLOSING_CURLY;

members: 
    member 
    (COMMA member)*;

member:
    string SEPARATOR value;

array:
    LEFT_BRACKET
    elements ?
    RIGHT_BRACKET;

elements:
    element (COMMA element)*;

element:
    value;

string:
    QUOTE_MARK characters QUOTE_MARK;

characters:
    character*;

character:
    LOWERCASE       |
    UPPERCASE       |
    DIGIT           |
    (BACKSLASH escape);

escape:
    BACKSLASH   |
    '/'         |
    QUOTE_MARK  |
    'b'         |
    'f'         |
    'n'         |
    'r'         |
    't'         |
    'u' HEX HEX HEX HEX;



number:
    real            |
    signed_int      |
    unsigned_int;

signed_int:
    MINUS unsigned_int;

unsigned_int:
    PLUS ? ONENINE DIGIT* | 
    ZERO;

real:
    (signed_int | unsigned_int)
    DEC_POINT DIGIT     +
    (EXPONENT (signed_int | unsigned_int)) ?;       

bool_val        :
    TRUE_CONST | FALSE_CONST;       

null_value  :
    NULL_VALUE;

EXPONENT:
    'e' | 'E';

ZERO:
    '0';

ONENINE:
    ('1' .. '9');

DIGIT:
    ZERO    |
    ONENINE;

OPENING_CURLY: 
    '{';

CLOSING_CURLY: 
    '}';

LEFT_BRACKET: 
    '[';

RIGHT_BRACKET: 
    ']';

COMMA:
    ',';

SEPARATOR:
    ':';

QUOTE_MARK:
    '"';

BACKSLASH:
    '\\';   

TRUE_CONST      :
    'true';     

FALSE_CONST     :
    'false';        

NULL_VALUE:
    'null_value';

PLUS:
    '+';

MINUS:
    '-';

LOWERCASE:
    ('a' .. 'z');

UPPERCASE:
    ('A' .. 'Z');

HEX:
    DIGIT           |
    ('a' .. 'f')    |
    ('A' .. 'F');

DEC_POINT:
    '.';

WS: ('\n' | '\r' | '\t' | ' ')+ -> skip;



