/*Patrick DeVries
 * 47381598
 * CRCP 1192
 * this program outputs ascii art in a repeating slide format using object oriented programming
 * */

#include <iostream>
#include "slide.h"
#include "slide1.h"
#include "slide2.h"
#include "slide3.h"
#include "slide4.h"

using namespace std;

void printLogo();

int main()
{
    Slide* slideArr[4] = {new Slide1, new slide2, new slide3, new slide4}; //declare the slide array and set each slide equal to a new slide

    string temp; //string to read input into
    printLogo(); //print the logo
    cout << "Welcome to the slide show! Enter anything to begin." << endl; //prompt to begin
    cin >> temp;
    temp = " ";
    int x = 0; //counter for slides

    while(temp.compare("x") != 0) //until the user enters 'x'
    {
        slideArr[x++%4]->printSlide(); //print slide [x mod 4] and increment x after the call
        cout << "To exit enter 'x', otherwise enter anything else to continue" << endl;
        cin >> temp;
    }

    cout << "All art is from https://asciiart.website/index.php?art=art%20and%20design/famous%20paintings\nThank you for viewing :)" << endl; //print source
    return 0;
}

void printLogo() //function to print the logo
{
    cout << " 		<C' `>   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c CC>>;;, <C> CC,`CC>>'`'CCCCC\n";
    cout << "		' ;C>;> J$$$$$$$$$$$$$$$$$$$$$$$$$????????$$$.`C''''<><>', CC,.,;;C>'`<CCC\n";
    cout << "		  <CCC  $$$$$$$$$$$$$$$$$$$$$P\"  .,ccccccc$$$$. ,CCC>;,;<C,.``'''  ,<> .,'\n";
    cout << "		 ,CCC .<$$$$$$$$$$$$$$$$$$$$\"  zJ$$$$$$$$$$$$$$c <CCCC`<CCCCCCCCC>,`CC'<'\n";
    cout << "		,CCC ; J$$$$$$$$$$$$$$$$$$$$,c$$??C????\"\"???$$$$hc`'>' ;.``<CC>>><C C> C>\n";
    cout << "		CC>>;C ?$$$$$???????$$$$$$$$$$$FJP\",c===\"   J$$$$$c ;, <CC> <C><\\<> C>;CC;\n";
    cout << "		>  >' . $$P\".,,zzcc, \"$$$$$$$$$;\" ,.    $\" J$$$$$$$ <C> CCC <C < > <C `CCC\n";
    cout << "		;<CCCC .`$,J$$$PCCC>?<C$$$$$$$$L -??    ,c$$$$$$$$$c C',CC> <' C,,;>   `CC\n";
    cout << "		CCCC>',C ?$$CCJ?\"\"'_`,`\"$$$$$$$$$c,=cccd$$$$$$$$$$$$ C <C>  ,; C <>     `C\n";
    cout << "		CCCC;,> .`$$$\",==\"\"-.  c<$$$$$$$$$$JJJJC?$$$$$$$$$$$ < CC < CC C,`>      `\n";
    cout << "		CCCCCC;<C,`$F' .    `,JC:<$$$$$$$$$$$$$$$$$$$$$$$$$$>` <>-C CC,`C,`,.\n";
    cout << "		`<C>`'CCCC,`h.,..,,,c$3C>:3$$$$$$$$$$$$$$$$$$$$$$$$$$ < <,<><`C;.`, <> .\n";
    cout << "		    <C`<CC> $$$$$$$$$$$CC;<$$$$$$$$$$$$$$$$$$$$$$$$$$r`<;CCCCCCC>.' <> C;,\n";
    cout << "    ___       ___       ___            ___       ___       ___       ___       ___       ___       ___   \n";
    cout << "   /\\  \\     /\\__\\     /\\  \\          /\\  \\     /\\  \\     /\\__\\     /\\__\\     /\\  \\     /\\  \\     /\\__\\  \n";
    cout << "   \\:\\  \\   /:/__/_   /::\\  \\        /::\\  \\   /::\\  \\   /:/  /    /:/  /    /::\\  \\   /::\\  \\   |::L__L \n";
    cout << "   /::\\__\\ /::\\/\\__\\ /::\\:\\__\\      /:/\\:\\__\\ /::\\:\\__\\ /:/__/    /:/__/    /::\\:\\__\\ /::\\:\\__\\  |:::\\__\\\n";
    cout << "  /:/\\/__/ \\/\\::/  / \\:\\:\\/  /      \\:\\:\\/__/ \\/\\::/  / \\:\\  \\    \\:\\  \\    \\:\\:\\/  / \\;:::/  /  /:;;/__/\n";
    cout << "  \\/__/      /:/  /   \\:\\/  /        \\::/  /    /:/  /   \\:\\__\\    \\:\\__\\    \\:\\/  /   |:\\/__/   \\/__/   \n";
    cout << "             \\/__/     \\/__/          \\/__/     \\/__/     \\/__/     \\/__/     \\/__/     \\|__|            \n" << endl;
}
