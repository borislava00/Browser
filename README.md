# Browser
Implementation of browser tabs.Each tab has a string URL and the date and time the page was loaded. The URL is the current loaded tab. From the current tab we can move to one of its immediate neighbors - or the one before
him or the one after him. For this purpose it is supported back or forward operations relative to
the current tab. It is assumed that there is always at least one tab open in the browser. If the user
close the last tab, a new one opens, in which the address "about: blank" is loaded.
When the browser starts a tab is immediately created in it, again with the address "about: blank". And in both cases, this tab becomes current.If the user opens a new tab, it must be added immediately after the current and in turn become current.If user closes a tab, the current one is the one immediately after it, if there is no such - the one before it.

COMMAND | Description |
 | |
GO <url> | loads the URL page <url> in the current tab|
 --- | --- |
INSERT <url> | adds a new tab after the current one in which it loadsthe <url> URL page|
 | |
BACK | the user is transferred to the tab that is just before the current one|
 | |
FORWARD| The browser goes to the tab that is immediately following currentlast one|
 | |
REMOVE | removes the current tab. The one after him becomes current|
 | |
PRINT | displays all tabs on the screen|
