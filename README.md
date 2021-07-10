# Browser
Implementation of browser tabs.Each tab has a string URL and the date and time the page was loaded. The URL is the current loaded tab. From the current tab we can move to one of its immediate neighbors - or the one before
him or the one after him. For this purpose it is supported back or forward operations relative to
the current tab. It is assumed that there is always at least one tab open in the browser. If the user
close the last tab, a new one opens, in which the address "about: blank" is loaded.
When the browser starts a tab is immediately created in it, again with the address "about: blank". And in both cases, this tab becomes current.If the user opens a new tab, it must be added immediately after the current and in turn become current.If user closes a tab, the current one is the one immediately after it, if there is no such - the one before it.

Attempt | #1 | #2 | #3 | #4 | #5 | #6 | #7 | #8 | #9 | #10 | #11
--- | --- | --- | --- |--- |--- |--- |--- |--- |--- |--- |---
Seconds | 301 | 283 | 290 | 286 | 289 | 285 | 287 | 287 | 272 | 276 | 269
