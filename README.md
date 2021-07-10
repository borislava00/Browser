# Browser
Implementation of browser tabs.Each tab has a string URL and the date and time the page was loaded. The URL is the current loaded tab. From the current tab we can move to one of its immediate neighbors - or the one before
him or the one after him. For this purpose it is supported back or forward operations relative to
the current tab. It is assumed that there is always at least one tab open in the browser. If the user
close the last tab, a new one opens, in which the address "about: blank" is loaded.
When the browser starts a tab is immediately created in it, again with the address "about: blank". And in both cases, this tab becomes current.If the user opens a new tab, it must be added immediately after the current and in turn become current.If user closes a tab, the current one is the one immediately after it, if there is no such - the one before it.

GO <url> | #1 |
--- | --- |
INSERT <url> | 301 |
--- | --- |
BACK | #1 |
--- | --- |
FORWARD| 301 |
--- | --- |
REMOVE | #1 |
--- | --- |
PRINT | 301 |
