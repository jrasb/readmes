# FORMAT CONVENTIONS

- [FORMAT CONVENTIONS](#format-conventions)
  - [LENGTH OF IDENTIFIERS](#length-of-identifiers)
  - [LETTER CASE AND NUMERALS](#letter-case-and-numerals)
  - [Multiple-word identifiers](#multiple-word-identifiers)
    - [Delimiter-separated words](#delimiter-separated-words)
    - [Letter case-separated words](#letter-case-separated-words)
    - [Examples of multiple-word identifier formats](#examples-of-multiple-word-identifier-formats)
  - [Metadata and hybrid conventions](#metadata-and-hybrid-conventions)
    - [Hungarian notation](#hungarian-notation)
    - [Positional notation](#positional-notation)
    - [Composite word scheme (OF Language)](#composite-word-scheme-of-language)

## LENGTH OF IDENTIFIERS

- shorter identifiers may be preferred as more expedient, because they are easier to type (although many IDEs and text-editors provide text-completion, which mitigates this)
- extremely short identifiers (such as "i" or "j") are very difficult to uniquely distinguish using automated search and replace tools (although this is not an issue for regex-based tools)
- longer identifiers may be preffered because short identifiers cannot encode enough information or appear cryptic
- longer identifiers may be disfavoured because of visual clutter

Brevity in programming could be in part attributed 
to:
- early linkers which required variable names to be restricted to 6 characters to save memory. A later "advance" allowed longer variable names to be used for human comprehensibility, but where only the first few characters were significant. In some variations of BASIC such as TRS-80 Level 2 Basic, long names were allowed, but only the first two letters were significant. This feature permitted erroneous behaviour that could be hard to debug, for example when names such as "VALUE" and "VAT" were used and intended to be distinct.
- early source code editors lacking autocomplete
- early low-resolution monitors with limited line length (e.g. only 80 characters)
- much of computer science originating from mathematics, where variable names are traditionally only a signle letter

## LETTER CASE AND NUMERALS

Some naming conventions limit whether lettes may be in uppercase or lowercase. Other conventions do not restrict letter case, but attach a well-defined interpretation based on letter case. Some naming conventions specifiy whether alphabetic, numeric, or alphanumeric characters may be used, and if so, in what sequence.

## Multiple-word identifiers

### Delimiter-separated words

One approach is to delimit separate words with a non-alphanumeric character. The two characters commonly used for this purpose are "-" and "_"; e.g. the two-word name "two words" would be represented as "two-words" or "two_words".

The hyphen is used by nearly all programmers writing COBOL (1959), Forth (1970), and Lisp (1958); it is also common in Unix for commadns and packages, and is used in CSS. This convention has no standard name, though it may be reffered to as lisp-case or COBOL-CASE (compare Pascal case), kebab-case, brochette-case, or other variants. Of these, kebab-case, dating at least to 2012, has achieved some currency since.

By contrast languages in the FORTRAN/ALGOL tradition, notably languages in the C and Pascal families, used the hyphen for the subtraction infix operator, and did not wish to require spaces around it (as free-form languages), preventing its use in identifiers.

An alternative is to use underscores; this is common in the C family of languages (including Python), with lowercase words, being found for example in "The C Programming Language" (1978), and has come to be known as snake case or snail case. Underscores with uppercase, as in UPPER_CASE, are commonly used for C preprocessor macros, hence known as MACRO_CASE, and environmnet variables in Unix, such as BASH_VERSION in bash. Sometimes this is humorously referred to as SCREAMING_SNAKE_CASE (alternatively SCREAMING_SNAIL_CASE).

### Letter case-separated words

Another approach is to indicate word boundaries using medial captialization, called "camelCase", "PascalCase", and many other names, thus respectively rendering "two words" as "twoWords", or "TwoWords". This convention is commonly used in Pascal, Java, C#, and Visual Basic. Treatment of initialisms in identifiers (e.g.the "XML" and "HTTP" in "XMLHttpRequest") varies. Some dictate that they may be lowercase (e.g "XmlHttpRequest") to ease typing, readability and ease of segmentation, whereaas others leave them uppercased (e.g "XMLHTTPRequest") for accuracy.

### Examples of multiple-word identifier formats

**Multiple-word identifier formats**

**Formatting** | **Name(s)**
---|---
twowords  | flatcase
TWOWORDS  | UPPERCASE, SCREAMINGCASE
twoWords  | (lower) camelCase, dromedaryCase 
TwoWords  | PascalCase, UpperCamelCase
two_words | snake_case, snail_case, pothole_case
TWO_WORDS | ALL_CAPS, SCREAMING_SNAKE_CASE, MACRO_CASE, CONSTANT_CASE
two_Words | camel_Snake_Case
Two_Words | Pascal_Snake_Case, Title_Case
two-words | kebab-case, dash-case, lisp-case, spinal-case
TWO-WORDS | TRAIN-CASE, COBOL-CASE, SCREAMING-KEBAB-CASE
Two-Words | Train-Case, HTTP-Header-Case

## Metadata and hybrid conventions

Some naming conventions represent rules or requirements that go beyond the requirements of a specific project or problem domain, and instead reflect a greater overarching set of principles defined by the software architecture, underlying programming language or other kind of cross-project methadology.

### Hungarian notation

See [HUNGARIAN_NOTATION.md](HUNGARIAN_NOTATION.md);

### Positional notation

A style used for very short (eight characters and less) could be:
LCCIIL01, where LC would be the application (Letters of Credit), C for COBOL, IIL for the particular process subset, and the 01 a sequence number.

This sort of convention is still active in mainframes dependent upon JCL and is also seen in the 8.3 (maximum eight characters with period seperator followed by three character filetype) MS-DOS style.

### Composite word scheme (OF Language)

IBM's "OF Language" was documented in an IMS (information management system manual).

It detailed the PRIME-MODIFIER-CLASS word scheme, which constituted of names like "CUST-ACT-NO" to indicate "customer account number".

PRIME words were meant to indicate major "entities" of interest to a system.

MODIFIER words were used for additional refinement, qualification and readability.

CLASS words ideally would be a very short list of data types relevant to a particular application. Common CLASS words might be: NO (number), ID (identifier), TXT (text), AMT (amount), QTY (quantity), FL (flag), CD (code), W (work), and so forth. In practice, the availible CLASS words would be a list of less than two dozen terms.

CLASS words, typically positioned on the right (suffix), served much the same purpose as Hungarian notation prefixes.

The purpose of CLASS words, in addition to consistency, was to specify to the programmer the data type of a particular data field. Prior to the acceptance of BOOLEAN (two values only) fields, FL (flag) would indicate a field with only two possible outcomes.

---
