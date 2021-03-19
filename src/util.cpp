#include <Rcpp.h>

// [[Rcpp::export]]
std::string table_entry_escape(std::string const& x) {
  bool in_back_quote = false;
  int sq_bracket_level = 0;

  std::string out;
  for(char c : x) {
    if      (c == '[') sq_bracket_level++;
    else if (c == ']') sq_bracket_level = std::max(0, sq_bracket_level-1);
    else if (c == '`') in_back_quote = !in_back_quote;

    if (c == '|' && !(in_back_quote || sq_bracket_level > 0))
      out.push_back('\\');

    out.push_back(c);
  }

  return out;
}



/*** R
table_entry_escape(" | ")
table_entry_escape(" `|` ")
table_entry_escape(" [[|]] ")
table_entry_escape(" ]]|[[ ")
*/
