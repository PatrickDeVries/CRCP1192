/*Patrick DeVries
 * 47381598
 * CRCP 3305
 * this program outputs ascii art in a repeating slide format using procedural programming
 * */

#include <iostream>

using namespace std;
void printAscii(int x);
void printLogo();

int main()
{
    string temp; //string to read input into
    printLogo(); //print the logo
    cout << "Welcome to the slide show! Enter anything to begin." << endl; //prompt to begin
    cin >> temp;
    temp = " ";
    int x = 0; //counter for slides

    while(temp.compare("x") != 0) //until the user enters 'x'
    {
        printAscii(x++%4); //call printAscii with input x mod 4 and increment x after the call
        cout << "To exit enter 'x', otherwise enter anything else to continue" << endl;
        cin >> temp;
    }

    cout << "All art is from https://asciiart.website/index.php?art=art%20and%20design/famous%20paintings\nThank you for viewing :)" << endl; //print credit
    return 0;
}

/**
 * @brief printAscii function prints an ascii art depending on the input x
 * @param x represents which slide to print
 */
void printAscii(int x)
{
    switch (x) //use a switch case statement to determine which slide will be printed
    {
    case 0:
        cout << "                                                                        ,;\n";
        cout << "                                                                     ;<> .\n";
        cout << "                                                                   ,C>',<>\n";
        cout << "                                                                / ,C',<C'.\n";
        cout << "                            .,,;<<<<<>>>>;,,.             <   .  <> ,C' ,C\n";
        cout << "                     .;<CCCCCCCCCCCCC>>>'''''.,          .> ,C' <> ,C',<CC\n";
        cout << "                   .-CCCCCCCCCC><CCC .;<CCCCCCCCCC>;.. -;C ;C,,C' <> ,CCC>\n";
        cout << "                .<>;<CCCCCCC>'.,CCCCCCCC>>'''.,;CCCCCC>;CCCCC>'.;C> ,CCC\n";
        cout << "          .;CCC CCCC`<CCC>' ,<CCCCCC>>''.;C>>'''`<CCCCCC><CCC;<C>',<CCC\n";
        cout << "        . <CCCC, <CC>;,.,;<CCCC>>''.;<>,,,. -CCCC;.``''.;<C>>''',<CCC>\n";
        cout << "       <C;,CCCCC>.`C>'''''''  --<>;.``''<<<C;.`<<<CCCCCC>,;;<CCCCCCCC>;,\n";
        cout << "     ,CCCCCCCCC>' . `<C>' .,,zc,`<CCCC, -;.``<<>;<CCCCCCCCCC>>''''''<>'\n";
        cout << "    .<CCCCC''' zc$$$ccccc$$$$$$$h,.`<<C> <CCC;,,.``<`'CC>' .;<CCCCCC-\n";
        cout << "     ,CCCC' ,c$$$$$$$$$$$$$$$$$$$$$$cc,.  `'<<CCCCCCCCC,,<C`<CCC>>'    .,.\n";
        cout << "    ;CCCC' J$$$$$$$$$$$$$$$$$$$$$$$$$$$$$. `<>;,.```<<<<<CCC CC,.,,,;CC>'\n";
        cout << " .;C><C> z$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$. .`'<<<>>;,, <CC CCCCCCCCCC,,.\n";
        cout << "<C' `>   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c CC>>;;, <C> CC,`CC>>'`'CCCCC\n";
        cout << "' ;C>;> J$$$$$$$$$$$$$$$$$$$$$$$$$????????$$$.`C''''<><>', CC,.,;;C>'`<CCC\n";
        cout << "  <CCC  $$$$$$$$$$$$$$$$$$$$$P\"  .,ccccccc$$$$. ,CCC>;,;<C,.``'''  ,<> .,'\n";
        cout << " ,CCC .<$$$$$$$$$$$$$$$$$$$$\"  zJ$$$$$$$$$$$$$$c <CCCC`<CCCCCCCCC>,`CC'<'\n";
        cout << ",CCC ; J$$$$$$$$$$$$$$$$$$$$,c$$??C????\"\"???$$$$hc`'>' ;.``<CC>>><C C> C>\n";
        cout << "CC>>;C ?$$$$$???????$$$$$$$$$$$FJP\",c===\"   J$$$$$c ;, <CC> <C><\\<> C>;CC;\n";
        cout << ">  >' . $$P\".,,zzcc, \"$$$$$$$$$;\" ,.    $\" J$$$$$$$ <C> CCC <C < > <C `CCC\n";
        cout << ";<CCCC .`$,J$$$PCCC>?<C$$$$$$$$L -??    ,c$$$$$$$$$c C',CC> <' C,,;>   `CC\n";
        cout << "CCCC>',C ?$$CCJ?\"\"'_`,`\"$$$$$$$$$c,=cccd$$$$$$$$$$$$ C <C>  ,; C <>     `C\n";
        cout << "CCCC;,> .`$$$\",==\"\"-.  c<$$$$$$$$$$JJJJC?$$$$$$$$$$$ < CC < CC C,`>      `\n";
        cout << "CCCCCC;<C,`$F' .    `,JC:<$$$$$$$$$$$$$$$$$$$$$$$$$$>` <>-C CC,`C,`,.\n";
        cout << "`<C>`'CCCC,`h.,..,,,c$3C>:3$$$$$$$$$$$$$$$$$$$$$$$$$$ < <,<><`C;.`, <> .\n";
        cout << "    <C`<CC> $$$$$$$$$$$CC;<$$$$$$$$$$$$$$$$$$$$$$$$$$r`<;CCCCCCC>.' <> C;,\n";
        cout << "  ;CCC. CC>-`$$$$$$$$$$$CC:$$$$$$$$$?$$$$$$$$$$$$$$$$$.`<'`<CCCC>',C' <CCC\n";
        cout << "  <CC',<>',;.?$$$$$$$$$$C>;$$$$$9???-<$$$$$$$$$$$$$$$$$c,`-.``---''.,CCC>>\n";
        cout << ",C'CCCC ;.`C> $$$$$$$$$$$>`$$$$$F<;,c$$$$$$$$$$$$$$$$$$$$L `C>>;;<CCCCCCCC\n";
        cout << "C> CC>C,`C,`> `?$$$$$$$$$h;` `\"'.<$$$$$$$$$$$$$$$$$$$$$$$P . CCCCC,.;;.`''\n";
        cout << "'  `C `C;CC,CC; \"$$$$$$$$$$$$$$$$<$$$$$$$$$$$$$$$$$$$$$$P' C,`CCCCCCCCCCCC\n";
        cout << "    `C,.``<CCCCC, ?$$$$$$$$$$$????\"\"'\"\"\"\" J$$$$$$$$$$$$\" ..`C,C>`<<<<>>''<\n";
        cout << "     `CCCC;.``<CC>.`$$$$$$$???     .,c=:c$$$$$$$$$$$$P',$'< CC'C;  <CCCC>;\n";
        cout << "       <CCCCC>, `CC, \"$$$$$hcc,\"?C????JJ$$$$$$$$$$$$\",J$$ C CC <C . ``'',.\n";
        cout << "          `C>`CC,`<CC, \"$$$$$$$$$$>;;??$$$$$$$$$$$P',$$$$ C CC> C,`C;. <CC\n";
        cout << "         .,CC,`<C,,CCC .`?$$$$$$$$JJ$$$$$$$$$$$$P\",J$$$$F.>,CC><CC CCC> <C\n";
        cout << "       ;C>'CCC>.`<'<CC $c, ?$$$$$$$$$$$$$$$$$$$\" c$$$$$$ <><C> <CC ``<C;.`\n";
        cout << "      ,CC> `CCCCCCCCC',$$$h.`?$$$$$$$$$$$$$$$\" z$$$$$$$F;CC>',<CC>,C>.`<C;\n";
        cout << "      <C> <>.`'''<>'  $$$$$$$c \"$$$$$$$$$??\".z$$$$$$$$$ `\".;<CCC> .`<C; CC\n";
        cout << "      CC <CCC <C'<Cr J$$$$$$$$$c,``''\"\"'.zc$$$$$$$$$$$F;;CCCCC>' ;C, <CCCC\n";
        cout << "     <CC C><C CC CCC $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ CCCC>' .c;`<C> C <C\n";
        cout << "     `CC C <C.<C CCC ?$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$F,C>'.;;.`CC,`CCC ;CC\n";
        cout << ">,.   CC ` CC> <,CCC>`$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" ' ;<.`CC  `C <C> CC\n";
        cout << "`<CCC CCC,.`CC> C, <C $$$$$$$$$$$$$$$$$$$$$$$$$$$$$P  <CCCC <CC  C><C <C'.\n";
        cout << "C, `< C>;C> CCC,)C, C $$$$$?$$$$$$$$$$$$$$$$$$$$$$$ , CCCCC,<C>.;C>  ,C> C\n";
        cout << "> <>, C'<CC CCC>;CC ' \".,;;;;, \"$$$$$$$$$$$$$$$$$$' `.`CCCC><C><CC> ,C>  C\n";
        cout << "C> < ,C CC>CCCC';CC .;CCCCCCCCC,.\"?$$$$$$$$$$$$$$' ' `, <<C><C, >' ;C> < C\n";
        cout << "CC. >> ;>  CCCC CC> `\"',.,;,``'<<, ??$$$$$$$$$$$F $c'.'--;;;<C> .;C> ,C>,C\n";
        cout << "C  `.;- ., CCC,,CC ,CCCCCCCCCCC,.`>- \"\"??$$$$$$$,J$$c <>,<>' .;<CC> ;C',<C\n";
        cout << "`'''.,;C',<CCCCCC',CCCC,<CC''<<CC,`, <Ccd$$$$$$$$$$$$h  .,;CCCCCC' <> ,CCC\n";
        cout << "CC>>>''.;CCCCCCC  '.,..,.``<C>,.`<; >.\"?$$$$$$$$$$$$$$h.`<CCCC>'.;C> <CC>\n";
        cout << "CC>;CCCCCCCCCC> ,;<<<<<<<>>.``CC; <. '  \"\"?$$$$$$$$$$$$$h.`'  --<CC,<CC> <\n";
        cout << "CCCCCCCCCCCC>  .,;;;;<CC;,.`>, `C,`C <hcccd$$$$$$$$$$$$$$$c -<>>;;,.`<C `C\n";
        cout << "CCCCCCC>''.,<>>>''''```,'''-<CC,`C <,`??$$$$$$$$$$$$$$???===  .,..``--<C,\n";
        cout << ">>''.,,,cccccccc$$$$hcc,``> )CCC, <>.  ,J$$$$???\"\".,,--  _.,c,``<C;  =..`'\n";
        cout << "cc$$$$$$$$$$$$$$$$$$$$$$$c > CC>C>;.` `??\"\".,;<<>''.,cd$$$$$$$h. .`'>;.`<>\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$,`,`C,`<CCCCC;<CCC>>' ,c$$$$$$$$$$$$$$c,`..`<-<C\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$ > `C;. ``''''.,zccd$$$$$$?????\"\"\"\"??$$c `C;, `\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$,`> `<C>;,.```<<<>>,,`\"\".,;;<CCCCCC;, \"$$c `<<C\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ` -.`<CCCC'--;;<<<>>>''.,,;;;,.``<CC,`$$$c  `\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c, `>;.`<<C>>>;;,,;;<CCC>''<<<C> -.`< `$$$$c\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.`<CC;,,.``'<>'''''',,_``-;. `.\"$c  ?$$$$h\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$hc,,`''''.,cc$$$$$$$$$$cc `>  -`?hcd$$$$$\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c`>    `$$$$$$$\n" << endl;
        break;
    case 1:
        cout << " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXP\n";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXY?\"\"\"  .\n";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXY?\"\"   ,;ciCCC\n";
        cout << "\"?YXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYYY??\"\"   .,;iCCCCCCCCCC\n";
        cout << ".,.  `\"\"\"\"\"\"???YYYYYYYYYYXXXXXXXYYYYY???\"\"\"\"\"\"\"   ..,;ciiCCCCCCCCCCC''`\n";
        cout << "```'`CCiiicccccccccc;;,,.    .,..,..,;cccciiiCCCCCCC????>''`````   .;ciCCC\n";
        cout << "Cic;,.   `''<<????CCCCCCCCCCCC?????''''''''`````'   ..,;;;ccciiiCCCCCCCCCC\n";
        cout << "CCCCCCCCCCCCcc;;;,,.       .,..,..,..,;;cciiiiCCCCCCCCCCCCCCCCCCCCC??>'`\n";
        cout << "``''?CCCCCCCCCC\"'```''CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC??\"\"''``   _.,;cciCC\n";
        cout << "ic;;,. ````'<?Ciiccc;,,.  ````'''`CCCCCC''''''''`' .,;cciiiCCCCCCCCCC?\"'`\n";
        cout << "CCCCCCCCCiic;._  ```''\"<?CCC;;;,,,.,..,...,;;;;;;C777???CC'''''``'  _,xiXX\n";
        cout << ".  ```'''`CCCCCCCiicc;,,,,,..        ```````'            .,,,xiiXXXXXXXXXX\n";
        cout << "XXXXXxXx,,,.   ```````````````````   .,..,..,.xiXiiXiiXXXXXXXXXXXXXXXXXXXX\n";
        cout << "XXXXXXXXXXXXXXXXXXxXxxXxXXXXXxxXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXY??\"\"\"\n";
        cout << "\"\"\"?YXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYY???\"\"\"\n";
        cout << "=          \"\"\"\"\"???YYXXXXXXXXXXXXXXXXXXXXXXXXXXYYY???\"\"                 ,;\n";
        cout << " -;ccccc;;,.,..            \"\"\"\"\"\"\"\"\"\"                          ,;ciCC'``'\n";
        cout << ";;, ```'???CCCCC  `''--;CCicc;;,      .,;;,,,.   ..      .,;ciCCCCCCCicc;-\n";
        cout << "C'```CCiiiiiCCCCtCiicc;,.  ```' . .,;;iCCCCC'' .,;;cccc-''`CCCCCCCCCCCCC;;\n";
        cout << "CCCCc;,,.,;CCCcc,,,,..'' .;CC'`'CCCCCCCCCC'' ``' .,;;;cc===`CC''````````'\n";
        cout << ".,...```' .C.,.`\"\"\"\"?CCCCC'`CCC''''``'  .,.,;ciCCCCCC..,;cciiCtttCCCCCCCtt\n";
        cout << " ```'     `'`CCCCCCCCCCC' . `'       ```' .,. ```CCC''''`CCCCCCCCCCCCC?\"''\n";
        cout << "..                           ``'                            ```'\n";
        cout << "$$$$$$$$$$$$ccc$$$$$$$$\"?hccc=Jcc$$hccccccc$$$$$$$$$$$$$cccccc,,,,,ccc,,..\n";
        cout << "$$$??hcccci???CCCCCC$$L ,$$$$c $$hcccccJ???LcccccccccJCCC???????CCCC??????\n";
        cout << "$$F `?$$$$$$$$$$$$$$$$. ,$$\"$$.?$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
        cout << "$$,. ,$$$$$$$$$$$$$$$$. ,$$ $$h $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$??????????$$\n";
        cout << "$$$h $$$$$$$$$$$$$$$$$$ $$$ ?$h ?$$$$$$$$$$$$$$$$$$$$$$$???izc?????????i??\n";
        cout << "???\" ?????$$$$$$$\"\"\"\"\"\"  \"\" ?\"\" `\"?\"\"\"$$$$$$$$??<Lr??cr?=\"\"    .  .      .\n";
        cout << ",,,,,,,,,J$$$$$$$$,.,,,,,,,,..       ,$$$$$$P>JP\"       .,;;,.!!;,.!!!!!!!\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$C3$$  -'  --''`!!!!'`'   ..  `!\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$Ci??c,,,.,..,.            `````\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$JJCCCC????????$$????rrrcccc,\n";
        cout << "\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$C<<$$$$$PF<$$$$\n";
        cout << "$$$$$cizccCCCCCCCCCcccc$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$?????)>>J$CLccc$??\"\"\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$????ii?iiJJJ$$??\"\"\"\n";
        cout << "$$$$$$$$$$$$$??$$$$????P$$$???iiiiicccccc<<????)Cicc$P\"\"      ..   .,;;!!!\n";
        cout << "$$$$$CCCCCCC>>J>>>>cccccc>>>??C????CC>cccJ$??\"\"\"\"\"         -``!!;!'  .!!!'\n";
        cout << "$$$$$??CCCCCCCCCCCff>>>>>J$$$P\"\"\"\"\"\"\"\"            ..,;;;;;;;!'`.,;;!'''\n";
        cout << "??????????????\"\"\"\"\"'' `'              .,..,;;;;!!!'```..```' .,.,;;;- `,;'\n";
        cout << "                    .,.    ,;;----'''''''```````'  `''`,;;!!'''`..,;;'' ,;\n";
        cout << "---;;;;;;;-----'''''''''``'  --- `'  .,,ccc$$hcccccc,.  `' ,;;!!!'``,;;!!'\n";
        cout << ";;;;,,.,;-------''''''' ,;;!!-    .zJ$$$$$$$$$$$$$$$$$$$c,. `' ,;;!!!!' ,;\n";
        cout << "  ```'    -;;;!'''''-  `.,..   .zJ$$$$$$$$$$$$$$$$$$$$$$$$$$c, `!!'' ,;!!'\n";
        cout << "!!-  ' `,;;;;;;;;;;'''''```' ,c$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c,  ;!!'' ,;\n";
        cout << ",;;;!!!!!!!!''``.,;;;;!'`'  z$$$$$$$$???\"\"\"\"\"'.,,.`\"?$$$$$$$$$$$  ``,;;!!!\n";
        cout << ";;..       --''```_..,;;!  J$$$$$$??,zcd$$$$$$$$$$$$$$$$$$$$$$$$h  ``'``'\n";
        cout << "```'''   ,;;''``.,.,;;,  ,$$$$$$F,z$$$$$$$$$$$$$$$$$$$c,`\"\"?$$$$$h\n";
        cout << "!!!!;;;;,   --`!'''''''  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$h.`\"$$$$h .\n";
        cout << "`'''``.,;;;!;;;--;;   zF,$$$$$$$$$$?????$$$$$$$$$$$$$?????$$r ;?$$$ $.\n";
        cout << "!;.,..,.````.,;;;;  ,$P'J\"$$$$$$P\" .,c,,.J$$$$$$$$$\"',cc,_`?h.`$$$$ $L\n";
        cout << "'``````'    .,..  ,$$\". $ $$$$P\",c$$$$$$$$$$$$$$$$',$$$$$$$$$$ $$$$ $$c,\n";
        cout << "!!!!!!!!!!!!!'''  J$',$ $.`$$P c$$$$$$$$$$$$$$$$$$,$$$$$$$$$$$ $$$$ $$$$C\n";
        cout << "   ``            J$ ,$P $$ ?$',$$$$???$$$$$$$$$$$$$$$??\"\"\"?$$$ <$$$ $$$$$\n";
        cout << "c           ;,  z$F,$$  `$$ $ ?$\"      \"$$$.?$$$ $$$P c??c, ?$.<$$',$$$$$F\n";
        cout << "$$h.  -!>   ('  $\" $F ,F ?$ $ F ,=\"?$$c,`$$F $$\"z$$',$' ,$$P $h.`$ ?$$$$$r\n";
        cout << "$$$$$hc,. ``'  J$ $P J$ . $$F L \",,J$$$F <$hc$$ \"$L,`??????,J$$$.` z$$$$$\n";
        cout << "$$$$$$$$$$c,'' ?F,$',$F.: $$ c$c,,,,,c,,J$$$$$$$ ?$$$c,,,c$$$$$$F. $$$$$$\n";
        cout << "`\"$$$$$$$$$$$c, $$',$$ :: $$$$$$$$F\"',$$$$$$$$$$h ?$$$L;;$$$??$$$$ $$$$$$\n";
        cout << "   \"?$$$$$$$$$$ $$$$$$ : .`F\"$$$$$$$$$$$$\"\"\"\"?\"\"\"h $$$$$$$\"$,J$$$$ $$$$$'\n";
        cout << "      \"?$$$$$$$ $$$$$$.`.` h `$$$$$$$$$$$cccc$$c,zJ$$$$$P' $$$$$P',$$$$P\n";
        cout << "$.       `\"\"?$$ $$$$$$$  ` \"$c \"?$$$$$$$$$$$$??$$$$$$$$\" ,J$$$P\",J$$$$P\n";
        cout << "..           `\" ?$$$$$$h    ?$$c.`?$$$$$$$$$' . <$$$$$' ,$$$\"  ,$$$$$\"\n";
        cout << "!!>. .          `$$$$$$$h  . \"$$$c,\"$$$$$$$' `' `$$$P  ,$$$' ,c$$$$$'   ;!\n";
        cout << "```<!!!>         `$$$$$$$c     \"$$$c`?$$$$$  : : $$$  ,$$P' z$$$$$$'   ;!!\n";
        cout << "$hc ```'  ;       `$$$$$$$.      ?$$c ?$$$$ .: : $$$  $$F ,J$$$$$$'   ;!!\n";
        cout << ".,..      '        `$$$$$$$       \"$$h`$$$$ .' ' $$$ ,$$ ,J$$$$$$'    !!!\n";
        cout << "????P               `$$$$$$L       $$$ $$$F :.: J$$P J$F J$$$$$P     ;!!\n";
        cout << "-=<                  ?$$.\"$$       `$$ ?$$' `' z$$$F $P  $$$$$$'     !!'\n";
        cout << "cc                   `$$$c`?        ?$.`$$hc, cd$$F ,$'  $$$$$$     ;!!\n";
        cout << "                      $$$$c         `$$c$$$$$$$$$\",c$'   $$$$$$     `!!\n";
        cout << "                      $$$$$          `?$$$$$$$$$$$$P'    $$$$$$> ..\n";
        cout << "                      $$$$$            `\"?$$$$$$$P\"      $$$$$$L $$c,\n";
        cout << "          !!         <$$$$$            zc,`\"\"\"',         <$$$$$$.`$$$$cc,\n";
        cout << "          !!         J$$$$P            `$$$$$$$' !'       $$$$$$L `$$$$$$h\n";
        cout << "         ;,          $$$$$L          `! J$$$$$',!!        $$$$$$$  `$$$$$$\n";
        cout << "          '         <$$$$$.           ! $$$$$$ !!         ?$$$$$$   `$$$$$\n";
        cout << "                   ,$$$$$$$c          `,`???? ;'         c,?$$$$'    `?$$$\n";
        cout << "                   $$$$$$$??           `!;;;;!     .     `h.\"?$P      `$$$\n";
        cout << "                  ,$$$$$$$h.            `'''      `'      `$$$P        `?$\n";
        cout << "                   $$$$$$$$h                      `!'      `\"'           `\n";
        cout << "                  `$$$$$$$$F          !;     !    ;,\n";
        cout << "                   `$$$$$$$'         `!!>         `!\n";
        cout << "c,        ;,        `?$$$$P           !!>             .\n";
        cout << "$F        !!>         `\"\"'            `!!            ;!>    <-\n";
        cout << "$F       `!!'                      ;!; '   `!        <!>    ;\n";
        cout << "$F        `'      <!               !!!               !!>    !!\n";
        cout << "?'       `'      !!!               !!!               !!>    !!\n";
        cout << "         !!'    <!!               ;!!!               `'     ;\n";
        cout << "        ;!!     !!                !!!!                      !'\n";
        cout << "        !!!     `'                !!!                       '            ;\n";
        cout << "        !!                       ;!!'                                    !\n";
        cout << "                                 !!!                      ;!             !\n";
        cout << "                                <!!!                      )'            `!\n";
        cout << "          ,;;>                 ;!!!                                     `!\n";
        cout << "          `''                 ;!!!                     !                `!\n";
        cout << "              ;!             ;!!!                                  ,$$c, `\n";
        cout << "            !''             ;!!!           '                    ,c$$$$$$c.\n";
        cout << ">                       ;   !!!                                 ?$$$$$$$$$\n";
        cout << "!!>                   ;!! .!!!     .!>                           \"?$$$$$$$\n";
        cout << "<! `!         ,;     ;!!  !!!!     !!                              `\"?$$$$\n";
        cout << " . '          '    ;!!! .!!!!     !!   .                              `\"?$\n";
        cout << " `'               <!!' .!!!!!!   !!!'  !                     >           `\n";
        cout << "                .!!!  <!!'`!!! .!!!!;                   !!>\n";
        cout << "                !!!  <!!'  !! ;!!!!!!                   (' ;,\n";
        cout << "               <!!  !!!'  !!! !!!'!!!                   !> `!\n";
        cout << "               !!' !!!'  `!!';!>  !!                 <! `' `!  !>.\n";
        cout << "               ' ;<!!'  .!!! !!' <!'       ;        `!! ;  `!  !!!>\n";
        cout << "            .<!>;!!!'   !!! `!! <!!                .. ' '      !!!' ;,\n";
        cout << "           <!!! <!! ;   !!! !!>;!!''!             J$$c         `!!; !!>\n";
        cout << "          ;!!! ;!! <!   !!> !! `!! !'            J$$$$hr        `'' !!!,;;\n";
        cout << "          ;!!! !! <!!  <!!  !' ;!! '            <$$$$$$$.           <!!!'!\n";
        cout << "          !!!  !;<!!'  !!! ;!  !!>              $$$$$$$$$$.          `'  !\n";
        cout << "         `!!! !!!!!'   !!! !! `!!!              ?$$$$$$$??$c        !!>;\n";
        cout << "         ;!! ;!!!!!   ;!!> !! <!!>               ?$$$$$$c,`$$.      `!!!\n";
        cout << "         !!! !!! !'   `!!> !! !!!                 \"?$$$$$$ \"?$c      `<!\n";
        cout << "        ;!!  !! ;!    !!!> ! ;!!!,                  \"$$$$$$c,\"?$c,\n";
        cout << "        ;!!  !! ;!    !!!! ! `!!!!                    \"$$$$$$c ?$$h.\n";
        cout << "        !!!> !! !!    !!!!    !!!                       \"?$$$$c \"$$$c,\n";
        cout << "        !!!' '  !!    `!!!    `!                          \"$$$$h.`?$$$c,\n";
        cout << "       <!!!>   <!!    `!!!     !>                          ?$$$$$c ?$$$$h.\n";
        cout << "       `!!!    `!!     !!!     `'                           \"?$$$$h.`?$$$$\n";
        cout << "        `!!>    !!     `!!                                    `?$$$$$$$$$$\n";
        cout << "         `!'    !!      `'                                      \"$$$$$$$$$\n";
        cout << "                `!>                                               ?$$$$$$$\n";
        cout << "                 `!                                                `\"?$$$$\n";
        cout << "                  `-                ;!                                `\"$$\n" << endl;
        break;
    case 2:
        cout << "       ;!>,!!!>\n";
        cout << "      <! ;!!!'\n";
        cout << "      !! `!!!.\n";
        cout << "      !!',!!!>\n";
        cout << "      !! !!!!!\n";
        cout << "     ;!! !!!!!\n";
        cout << "     `!! !!!!!\n";
        cout << "      !! !!!!!>                           .\n";
        cout << "      `!.`!!!!!                        ;<!'\n";
        cout << "       !! `!!!!                     ,<!'`\n";
        cout << "       `!> !!!!                   ;<!'\n";
        cout << "       <!! !!!!>                ;!'`\n";
        cout << "       !!! `!!!!               !!`                                    ,c,\n";
        cout << "       !!!> !!!!>             ;`<             ,cc$$cc            .,r== $$c !\n";
        cout << "       !!!! !!!!!!.        ,<!' !!!!!>>>;;;;;;;;.`\"?$$c MMMMMMM )MM ,= \"$$.`\n";
        cout << "       <!!> !!!!!!!!!!!!!>'' ,>''''  ``````''''!!!; ?$$c`MMMMMM.`MMMP== `$h\n";
        cout << "       `!! ;!!!!!!''''.,;;;'''          JF !;;;,,,,; 3$$.`MMMMMb MMMnnnM $$h\n";
        cout << "       ;!! <!!!!.;;!!!''`               JF.!!!!!!!!!>`$$h `MMMMM MMMMMMM $$$\n";
        cout << "       ;!!>`!!!!!!'`                    ?> !!!!!!!!!> $$$  MMMMM MMMMMMM $$$\n";
        cout << "       <!! ;!!!!'                       `h !!!!!!!!!! $$$ MMMMMM MMMM\" M $$$\n";
        cout << "       `!>'!!!!                          b !!!!!!!!!! $$$ MMMMMM MMML,,`,$$$\n";
        cout << ",,,,,, ;! <!!!> ,,,,,,,,,,,,,,,,         $ !!!!!!!!!! $$$ MMMMMM MMMMML J$$F\n";
        cout << "!!!!!! !! !!!! `!!!!!!!!!!!!!!' ;        $ !!!!!!!!!! $$$ MMMMMP.MMMMMP $$$F\n";
        cout << "!!!!! ;!! !!!!> !!!!!!!!!!!!' ;' .`.`.`. ?.`!!!!!!!!! 3$$  MMMP `MMMMM>,$$P\n";
        cout << "!!!!' !!' !!!!> !!!!!!!!!!' ;!' `.`.`.`. `h !!!!!!!!! $$$  MMML  MMPPP J$$'.\n";
        cout << "!!!! !!!;!!!!!';!!!!!!!!' ;!'  .`.`.`.`.` ?,`!!!!!!!! ?$$ MMMMM.,MM_\"',$$F .\n";
        cout << "!!!';!!!.!!!!' <!!!!!!!` ;'  .`.`.`.`.`.`. ? `!!!!!!!>`$$ MMMMMbdML ` $$$  .\n";
        cout << "``` !!!> !!!! ```````` ;!  .`.`.`.`.`.`.`.` h `!!!!!!> $$ )MMMMMMMMM d$$' `.\n";
        cout << "!!' !!!''!!! <!!!!!!!> ' .`.`.`.`.`.`.`.`.` `?,`'!!!!! ?$h 4MMMMMMP z$$' .`.\n";
        cout << "'' <!!! !!!> ''''''''  .`.`.`.`.`.`.`.`.`.`.` ?h.``'`..`$$  MMMMMM ,$$F `.`.\n";
        cout << "` !!!! <!!!.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`. `\"??$F\". `$h.`MMMMM $$$'.`.`.\n";
        cout << " <!'! .!!!!> .`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`. cccc  `$$.'4MMP.3$F .`.`.\n";
        cout << "<!''! !!!!!> .`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`. J$$$$$F . \"$h.\" . 3$h .`.`.\n";
        cout << "!' ! !!!!!!> .`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.  \"\"\"\" .`.`.`$$, 4 3$$ .`.`.\n";
        cout << " ;! !!!!!!! `.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.  ?$h  J$F .`.`.\n";
        cout << ";'  !!!!!!! `.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`. \"$$$$P' .`.`.\n";
        cout << "'  <!!!!!!! `.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`. . .`.`.`.`.\n";
        cout << ",' !!!!!!! .`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.\n";
        cout << "!! !!!!!!',,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,  `.`.`.`.\n";
        cout << "!! !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!'  `.`.`.`.\n";
        cout << "!! <!!!!';!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ;! `.`.`.`.\n";
        cout << "!! ;!!!!>`!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!' <!! `.`.`.`.\n";
        cout << "',,!!!!''.;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!' <!!! `.`.`.`.\n";
        cout << "'''''.,;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!' <!!!! `.`.`.`.\n";
        cout << ";!!!!!!!!!!!!!!!!!!!!!!!>>>'''''''''`````''''''<!!!!!!!!!!!' !!!!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!!!!!!!!''''_,,uunmnmnmdddPPPPPPbbbnmnyy,_```''!  !!!!!!! `.`.`.`.\n";
        cout << "!!!!!!!!!''_``!'`,nmMMPP\"\"\"',.,ccccccr==pccccc,,..`\"\"444n,.`<!!!!!! `.`.`.`.\n";
        cout << "!!!!!!!' ,dMM ,nMMP\"\",zcd$h.`$$$$$$$$L c  $$$$$$$$$$??cc`4Mn <!!!!! `.`.`.`.\n";
        cout << "!!!!!! ,MMMP uMMP ,d$$$$$$$$cd$F ??$$$$$cd$$$$$$$$$F, ??h.`Mx !!!!! `.`.`.`.\n";
        cout << "!!!!!! MMMP uMM\",F,c \".$$$$$$$P'   ?$$$$$$$$$$$$$$$$C',J$$.`M.`!!!! `.`.`.`.\n";
        cout << "!!!'`  MMM 4MMM L`\"=-z$$P\".,,.    ,c$$$$$$$$$$$$$$$$$$$$$$$ ML !!!! `.`.`.`.\n";
        cout << "!!!.   `\"\" MMMM `$$hc$$$L,c,.,czc$$$$$$$$$$$$$$$$$$$$$$$$$$.4M `!!! `.`.`.`.\n";
        cout << "!!!!;;;..  `MMMb ?$$$$$$??\"\"\"\"?????????????????? ;.`$$$$$$$'JM',!!! `.`.`.`.\n";
        cout << "!!!!!!!!!>  4MMMb.\"?$$$cc,.. .,,cccccccccccccccc,c`.$$$$$$$ MM <!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!  `MMMMMb,.\"??$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$?$$$ MM ;!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!    \"4MMMMMMmn,.\"\"\"???$$$$$$$$$$$$$$$$$$ $$$\" ?$$ MP !!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!;.   \"4MMMMMMMMMMMmnmn,.`\"\"\"?????$$$$$$ ?$$  `CF.M> !!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!!!!;.   `\"\"44MMMMMMMMMMMMMMMMnnnn. ?$$$.<$$$h.$h MM !!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!!!!!!>.;.      `\"\"444MMMMMMMMMMMMMb $$$:<$$$$$$$ 4M <!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!!!!!!!!!!!;<;);>;.     ..\"\"\"\"44MMMM J$'  <$$$$$$h`Mb`!!! `.`.`.`.\n";
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>;      `MMM ?$.  d$$$$$$$ MM.`!! `.`.`.`.\n";
        cout << "!!!!!!!!!!'``!''' ..`'<!!!!!!!!!!!!!!!; .  MMM.<$$ <$$$$$$$$ 4Mb !! `.`.`.`.\n";
        cout << "!'''''''''..    ;MMMMnn.'!!!!!!!!!!!!!!! ; MMM J$$hJ$$$$$$$$h`MM !! `.`.`.`.\n";
        cout << ",xmdMMMbnmx,.    MMMMMMMr !!!!!!!!!!!!' ;: MMM $$$$$$$$$$??$$ MM !! `.`.`.`.\n";
        cout << "P\"'.,,,,c`\"\"4MMn  MMMMMMx !!!!!!!!!!!` <!: MMM $$$$$$$$L =c$F.MP !! `.`.`.`.\n";
        cout << "ub \"P4MM\")M,x,\"4b,`44MMMP !!!!!!!!!!  !!!: MMM ???$$$$$$\"=,$ JM';!! `.`.`.`.\n";
        cout << "ML,,nn4Mx`\"MMMx.`ML ;,,,;<!!!!!!!!! ;!!!!: MMM.-=,$$$$$$hc$'.MP !!! `.`.`.`.\n";
        cout << ". MMM   4Mx`MMML MM,`<!!!!!!!!!!!! ;!!!!!' `MMb  d$$$$$$$$' MM',!!! `.`.`.`.\n";
        cout << ",d\" MMn. .,nMMMM MMM '!!!!!!!!!!! ;!!!!!!>  4MMb `$$$$$$$'.dM'.!!!! `.`.`.`.\n";
        cout << ".`\"M\"_\" MMMMMMMP,MMM ;!>>!!!!!!' <!!!!!!!!!. \"MMb $$$$$$$ dM ;!!!!! `.`.`.`.\n";
        cout << " 'nr;MMMMM\"MMMP dMM' >>!(!)<<!  <!!!!!!!!!!!. `MM.`$$$$$$ MM !!!!!! `.`.`.`.\n";
        cout << "\",Jn,\"\". ,uMMP dMMP /)<;>><>' .!!!!!!!!!!!!!!; `Mb $$$$$F;MP !!!!!! `.`.`.`.\n";
        cout << " dPPM 4MMMMM\" dMMP (->;)<><' ;!!!!!!!!!!!!!!!!. 4M $$$$$h M>.!!!!!! `.`.`.`.\n";
        cout << "=M uMMnMMM\" uMMM\" <!;/;->;' ;!!!!!!!!!!!!!!!!!; 4M.??\"$$',M <!!!!!! `.`.`.`.\n";
        cout << "JM )MMMM\" uMMMM',!>;`(>!>' <!!!!!!!!!!!!!!!!!!! 4M> -??',M' !!!!!!! `.`.`.`.\n";
        cout << "MM `MP\" xdMMMP <(;<:)!`)' <!!!!!!!!!!!!!!!!!!!! MMb  - ,M';!!!!!!!' `.`.`.`.\n";
        cout << "MP   ,nMMMMP\" (>:)/;<:!  !!!!!!!!!!!!!!!!!!!!!! `MM.-= d';!!!!!!!! .`.`.`.`.\n";
        cout << ",xndMMMMP\" .;)`;:`>(;:  !!!!!!!!!!!!!!!!!!!!!!!; 4MMnndM <!!!!!!!  .`.`.`.`.\n";
        cout << "MMMMMP\" .;(:`-;(.><(' ;!!!!!!!!!!!!!!!!!!!!!!!!!, 4MMMMP !!!!!!!> `.`.`.`.`.\n";
        cout << "P\"\" .,;<):(;/(\\'>-)' ;!!!!!!!!!!!!!!!!!!!!!!!!!!!>.`\"P\" <!!!!!!! .`.`.`.`.`.\n";
        cout << ",<;),<-:><;,<- >;>' ;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;;<!!!!!!!!  .`.`.`.`.`.\n";
        cout << ")-/;`<:<;\\->:(';(' ;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!' `.`.`.`.`.`.\n";
        cout << ":\\;`<(.:>-;(;<>:  <!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! .`.`.`.`.`.`.\n";
        cout << "(.;>:'<;:<;-/)/  <!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  .`.`.`.`.`.`.\n";
        cout << ";-;:>:.;`;(';' ;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!' `.`.`.`.`.`.`.\n" << endl;
        break;
    case 3:
        cout << "                                          . .\n";
        cout << "                                       , h $ F\n";
        cout << "                                       ?,$,$,F\n";
        cout << "                                       `$$$$$P  ,\n";
        cout << "                                        ?$$$$L,c'\n";
        cout << "                                         $$$$$\"'\n";
        cout << "                                        c$$P\"                                         .CC,\n";
        cout << ";;,                                  .z$$$F                                          <CCCC\n";
        cout << "!'',ccc                            ,c$$$P\"                                        ,;, `CC ;!.!;\n";
        cout << " ,$$$$$\".                        zJ$$$$\"                        .z..             <!!!! ' <<!!!!;\n";
        cout << "> $\".,,c,.                     c$$$$$P'                        ,$$$$$c,.     ,cL !!!!! ;> ``!!!!!\n";
        cout << " z$$,.,$$$F                   $$$$$$P                          J$$$$PP$$$hc  $$$ !!!!! `<!> !!!!!>;\n";
        cout << "z$$$$$$$$$=                  \"??$$$\"                           <$$$$$ $$P\"..`$$F !!!!!!>'!><!'!'!!!\n";
        cout << "$$$$$$$$$,ccc             zJ$$$$$P'                            `?$$$$c \" ??$c$$$ !!!!!!!.,.' .,.!!!\n";
        cout << "$$$$$$$$$$??\"         .zJ$$$$$P\"                        .,;;;!!; <$$$$.  =$$$$$$r`!!'``'!!!!!!! ``'\n";
        cout << "`$$$$$$$P\"     ,ccd$$$$$$$$$\"'                         <!!!!!'!! `\"?$$h <c$$$$$$h  .. <!!!!> !>\n";
        cout << " $$$$$$$F  .zc???$??\"\"'..`\"         zcccc,,,.,..,..   `!!!!'  ' ;!; \"$$.`$$$$$$$$h,$P ;!!!' `'\n";
        cout << "J$$$$$$$L $P\" ,;;,;;!!!''          <$$$$$$$$$$$$P\",;,-``!(.-' .<!!!! `$L  \"?$$$$L.,.  ``! c?c,\n";
        cout << "$$$$$$$$$ ? ;!!!!!!'``,;;;;;;,      $$$$$\"\"\"???\" <!'  ' !' ;!!!!!!!!> $$h.   J$$$$$$$c   z, ? ,c$?hc,\n";
        cout << "$$$$$$$$'  <!!!'  ,;<!!!!!!!!!!>    ?$$$$$c     `!! ,;;!!;<`<!!!!!'`. $$$$. <$$$$$$$$$.  `\"\"? ' .==$$.\n";
        cout << "$$$$$$$$ ;!!!!'!!!!!!!!!!!!!!!       $$$$$$c     !! !!!!!' ;'`!'' ,$F.\"???$ J$$$$$$$$$h.,,cc.    .,$$$c\n";
        cout << "$$$$$$$' `(!!> !!!!!! ..`!!!' ,$     ?$$$$$$.      ;!!!' ;! ., z$$F zJh=y,?$$??\"'.,..`\"?$$$$$r';, `\"'?$c\n";
        cout << "$$$$$P  ;!!!!> !!!!' <F\" `' ,J$$      $$$$$$h     c, `..<'' `,J$$P  \" $r`F`'.,c$$$$$$$c $$$$$F`!!   ?$$$\n";
        cout << "$$$P\" <; ``!!! !!!' .`?chcc$$$L       `$$$$$$c    $$$c,.,ccc$$$$F cc  \".,c$$$$$$$$$$$$P $$$$$'`!! c <$$$\n";
        cout << ".\",;<!!!!>; ;! `' z$$L \",$$$$$$c       $$$$$$$c, J$$$$$$??????\" z$$$$ ! ?$$$$$$$$$$$P\",c$$$$F !!! $c ?$$\n";
        cout << "!!!!!!!!!!! `' c$$$$$$cd$$$$$$$\"\"      $$$$$$$$h $$$$$$$c,.,,zc$$$$$$.`! $$$$$$$$$\"',c$$$$$P <!! z$$c`$$\n";
        cout << "!!!!!!!!!!!!!`<$$$$$$$$$$$$$$??        ?$$$$$$$',$$$$$$$$$$$$$$$$$$$$F !><$$$$P\"\",c$$$$$$$$ ;!!' $$$$.?$\n";
        cout << "!!!!!!!!!!!!! J$$$$$$$\"$$$$$$F         `??$???',$$$$$$$$$$$$$$$$$$$$$ <!> \"\".,cd$$$$$$$$$$\" !'' `?$$$$$P\n";
        cout << "!!!!!!!!!!!' z$$$$$$$$ \"\"\"??\",$$F ,c$,c c  .- ,$$$$$$$$$$$$$$$$$$$$$\" !!>  ?$$$$$$$$$$$$F ;!!      \"\"??\n";
        cout << "!!!!!!!!!',c$$$$$$$$$\",$$$$cd$P  J$$$$$$$c=\". $$$$$$$$$$$$$$$$$$$$$\" !!!>';`?$$$$$$$$P\"\".!''\n";
        cout << "!!!!!!'`,c$$$$$$$$$$$ $$$$$$$F J $$$$$$$\"  \"F<$$$$$$$$$$$$$$$$$$$$\" <!!! <!;,\"\"\"???\".,;!!'\n";
        cout << "!!!'.,c$$$$$$$$$$$$$$$$$$$$$P J z$$$$P\".z$$cc,,.\"\"?$$$$$$$$$$$$$$P >'!!  ``'`!!!>;;!''`'\n";
        cout << "! ,J$$$$\"\".,... \"$$$$$$$$$$P / z$$$$P c$$$$$$$$$$$c,.\"???$$$$$$$\" <'`!!! !;;;;, !!,,;'\n";
        cout << "! ?$$$F ;!!!!!!!  `\"??$$$$F `,J$$$$$   `\"?$$$$$$$$$$$$hcc ?$$$$\" !! `!!! !!!!!!,;!!!>\n";
        cout << "! <$$\" <!!!!!!'.zc,`'-.,..- z$$$$$$'        \"\"???$$$$$$$$F`??\" ;!!! <!!! !!!!!!!!!!!\n";
        cout << "!> $\" !!!',,,zc$$$$$cc,_' ,J$$$$$$F        <!>;;;;,  $$$$$  ;!!!!!! !!!';!!!!!!!!!' .xx.  .\n";
        cout << "!! ' !!! J$$$$$$$$$$$$$$$$$$$$$$$\".         !!!!!!!!;`$$$$h `!!!!!  <!! <!!!!!''  nMMMMMb.\"MMMn,.\n";
        cout << "`' .<!! .\"\"???$$$$$$$$$$$$$$$$$$F !          `!!!!!!!;`$$$$$ <!!!! ;,.,;!!!' xJMbx`4MMMMMM 4MMMMMb.,..\n";
        cout << "Mx`<!'! !!!;;;,.\"\"\"?$$$$$$$$$$P\";!!           <!!!!!!!; $$$$c`!!! , `````.,.\"4MMMMn.\"4MMMML .\"4MMMMMMMMn\n";
        cout << "MMn ',`!!!!!!!!!!!>;,,,.\"\"\"??\" <!!             !!!!!!!!; ?$$$.`!>4MMMMMM MMMb 4MMMMMM,`4MMM Mb.\"MMMMMMMM\n";
        cout << "MMMb.`,`!!!!!!!!!!!!!!!!!!! ;!!!!              `!!!!!!!!; ?$$$ ' ,_\"\"4MMMMMMMbx`MMMMMMMx`4Mx,MMMMMMMMMMM\n";
        cout << "MMMMMx`,`!!!!!!!!!!!!!!!!!' !!!                 !!!!!!!!!> ?$$F MMMMM,  ..`\"4MM,JMMMMMMMbnMMMMMMMMMMMMMM\n";
        cout << "MMMMMMn `!!!!!!!!!!!!!!!!'`!!!'             .xnx `<!!!!!!' J$$F,MMMMMMM 44Mbn,.'\"MMMMMMMMMMMMMMMP4MMP4MM\n";
        cout << "MMMMMMMM,`!!!!!!!!!!!!!!!>'!!!.            `\"\"\")Mnx,,,._ ,J$$$F`MMMMMMMbmn,. \"4Mx.\"Mb.`\"4MMM\"4MMb \"4hx`M\n";
        cout << "MMMMMMPPP  `!!!!,'`!!<!!!,`!!!'        .xn,c\"\"\"MMMMMMMMP F\"$$$F4MMMMMMMMMMMMMb 4MMx \"4Mb.\"4MMn.`MMn 4P M\n";
        cout << "MP\"\"_.nmnP\"..``!!> <>'!!!> `' .nn. -nx.`\"\"4MMMMMMMMMMMP J',P\"$>4MMMMMMMMMMMMMMbx'\"??nx \"4n.`MMM 4MMMx. 4\n";
        cout << ".xJMMMP\".nMMMM-..`.   _,_ -nhn 4MMMn.\"MMMmn.'\"44MMMMP\".. cP,j)-4MMMMMMMMMMMMMMMMMMmnMMMn.'4r`MMb \"MMMMMx\n";
        cout << "MMMP\".xJMMMMM\",M> MMMMMMMb MMMb.`4MMMx`4MMMMMMnx'\"* xJMMx r',',MMMMMMPMMMMMMMMMMMMMMMMMMMbx. 4MMM,)MMMMM\n";
        cout << "MP ,JMMMMMP\".nMM>4MMMMMMML MMMMMb.\"MMMMn.\"4MMMMPMn,.\"4MMMnx.,nMMMMMM\",MMMMMMMMMMMMMMMMMMMMMMx`4MMb..`MMM\n";
        cout << "MnJMMMMMP xJMM\"..`MMMMMMMM,`MMMMMM,`4MMMMbn \"MM MMMMMr`4MMMMMMMMMMM\",MMMMMMMMMMMMMMMMMMMMMMMMx \"MMMM,\"4M\n";
        cout << "MMMMMMMP JMMMM M>,MMMMM 4MMnMMMMMMMM,\"MMMMMMn.\",MMPPlCx \"MMMMMMMPP ,MMMML`4MMMMMM MMMMMP4MMMMMM 4MMMMb \"\n";
        cout << "MMMMMP\",JMMMM uM JMMMMM>4MMMMMMMMMMMbx`MMMMMMMn.\"MMMMMMMn.\"4MM\".,nMMMMMMMnx.\"\"MMM 4MMMMb.\"MMMMMMn MMMMb.\n";
        cout << "MMMP\".nMMMMM>;MM MMMMMM>'MMMMMMMML.'\"? `4MMMMMMMx`4MMMMMMMn.\"M MMMMMMMMMMMMMb MMML`MMMMMM 4MMMMMM )MMMMM\n";
        cout << "MM',JMMMMMMMMMM>,MMPMMM .`44MMMMMMMx +Mn 4MMMMMMMb.\"4MMMMMM>. ,MMMMMMMMMMMMMP MMMM MMMMMMb.\"MMMMM 4MMMMM\n";
        cout << "M\",MMMMMMP\"MMMM JMM MMM 4Mnr4MMMMMMM>4MMb \"MMMMMMMMnx.\"4??CCML \"4MMMMMMMMMMM,`4MMM 4MMMMMMP,MMMMM\\4MMMMM\n";
        cout << "MnJMMMMMP ;MMMM,MMM MMMb MM>'MMMMMMML`MMMb 4MMMMMMMMMMx'n 4MMMMn,.\"4MMMMMMMMMb MMMb MMMMMML`4MMMMx MMMMM\n";
        cout << "MMMMMMM\".r4MMMMMMMM \"MMMr`MM MMMMMMMM,\"MMMb MMMMMMMMMMM )n 4MMMMMML MMMMMMMMMM MMMM MMMMMMMMn MMMMx`4MMM\n";
        cout << "MMMMMMP M JMMMM MMM  4MMM 4Mx`MMMMMMMM,4MMM,\"MMMMMMMMMMb Mx,MMP4MMM 4MMMMMMMMM MMMM MMMMMMMMMr`MMMMn MMM\n";
        cout << "MMMMMP J uMMMMP MMM L`MMM>4MMr`MMMMMMMLJMMMM,\"MMMMMMMMMMx`MMMMb \"MMn 4MMMMMMMM MMMM MMMMMMMMMP MMMMM \"MM\n";
        cout << "MMMMM J';MMMMM l `M M,\"MMb MMM MMMMMMMMMMMMMM,)MMMMMMMMMM 4MMMMM,`4M>'MMMMMMMMxJ\"44 MMMMMMMMM uMMMMMM 4M\n";
        cout << "MMMM\",M MMMMMM ,J \",MM )MM MMMx`MMMMMMMMMMMMM>'MMMMMMMMMM>'MMMC\"\"b,`M 4MMMMMMMMMn>4 4MMMMMMMP MMMMMMMr'\n";
        cout << "MMMMnM> MMMMMMMMM, MMM 4MMr`MM> 4MMMMMMMMMMMMM 4MMMMMMMMMM MMMMMbn,.`b MMMMMMMMMMb r4MMMMMM\",JMMMMMMMM\n";
        cout << "MMMMMM .`MMMMMMMMM,)MMn MMM MMMx`MMMMMMMMMMMMM>4MMMMMMMMMM MMMMMMMMMn. 4MMMMP MMMM, JMMMMMM MMMMMMMMMMr\n";
        cout << "MMMMMP M,\"\"MMMMMMM>4MMM 4MM )MMM,'\"MMMMMMMMMMMb 4MMMMMMMMMMMMMMMMMMMMMM,`4MMP-4MMM>4MMMMMM\",MMMMMPPPP\"\n";
        cout << "MMMMM 4MM\" MMMMMMM>4MMM>4MML`MMML'x`MMMMMMMMMMM>'MMMMMMMMMMMMMMMMMMMMMMMMnx . MMMM>'MMMMMM 4MMMM\"\n";
        cout << "MMMMP MMM JMMMMMMM>4MMML'\"MM MMMM,) MMMMMMMMMMMM,`MMMMMMMMMMMMMMMMMMMMMMMMML' 4MMM>4MMMMMML MMM'\n";
        cout << "MMMP JMM uMMMMMMMM,)MMMMM MM 4MMP Jn.\"M MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM>  MMM>'??????\"\n";
        cout << "MMM nMMM MMMMMMMMM>4MMMMMnMM>4MMn.\"MM 4 MMMMMMMMMMMMb.\"MMMMMMMMMMMMMMMMMMMMMMn MMMP\n";
        cout << "MMP,MMMC,MMMMMMMMM>'MMMMMMMMb MMMM MML' MMMMMMMMMMM \"M 4MMMMMMMMMMMMMMMMMMMMMP\n";
        cout << "P4 JMMP4MMMMMMMMMMM MMMMMMMMM,)MMM MMM, 4MMMMMMMMMMM,)h MMMMMMMMMMMMMMMMMMMP\n";
        cout << ">  MMM JMMMMMMMMMMM MMMMMMMMMb MMMr`MMMb MMMMMMMMMMMb.\"= MMMMMMMMMMMMPP\"\"\"\n" << endl;
        cout << "Slideshow ended, returning to beginning." << endl;
        break;
    }
}

/**
 * @brief printLogo prints the logo
 */
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
