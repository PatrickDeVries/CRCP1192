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
    Slide* slideArr[4] = {new Slide1, new slide2, new slide3, new slide4};

    string temp;
    printLogo();
    cout << "Welcome to the slide show! Enter anything to begin." << endl;
    cin >> temp;
    temp = " ";
    int x = 0;

    while(temp.compare("x") != 0)
    {
        slideArr[x++%4]->printSlide();
        cout << "To exit enter 'x', otherwise enter anything else to continue" << endl;
        cin >> temp;
    }

    cout << "All art is from https://asciiart.website/index.php?art=art%20and%20design/famous%20paintings\nThank you for viewing :)" << endl;
    return 0;
}

void printLogo()
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
