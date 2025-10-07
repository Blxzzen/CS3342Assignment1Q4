// This is a single-line comment the needs to be REMOVED
#include <iostream>

/* This is a multi-line comment that needs to be REMOVED
 * It spans multiple lines
 * this is another line it's spanning
 * you
 * get
 * the
 * idea
 * though
 * .
 * .
 * .
 */

int main() {
    int x = 10; // This is an inline single-line comment, it should get REMOVED

    /* This is an outer multi-line comment that should get REMOVED
     * It can contain nested comments...
     * /* This is a nested multi-line comment. */
     * And more text in the outer comment.
     * Another nested /* and another level */ comment. // A single-line inside multi-line.
     */

    std::cout << "Hello /* not a comment */ World!" << std::endl; // String with /*
    std::cout << "Another string with // not a comment" << std::endl; // String with //
    std::cout << "Char literal: '/' is not a comment" << std::endl; // Char literal '/'
    char single_quote_test = 'a'; /* Check single quote handling */

    /* Unclosed multi-line comment for robustness testing
    // This line is inside an unclosed comment
    std::cout << "This should not appear." << std::endl;
    */ // I closed it, Let's make it actually unclosed to test it.

    int y = 20; /* One last multi-line comment block
    * That also has
    * another /* nested // single line comment in the middle */ */

    return 0; // End of main
}

// EOF comment