open Webapi.Dom

let el = document->Document.createElement("strong")
let event = document->Document.createEvent("my-event")
let handleClick = _ => print_endline("asd")

let _ = Window.console(window)
let _ = Window.crypto(window)
let _ = Window.document(window)
let _ = Window.frameElement(window)
let _ = Window.frames(window)
let _ = Window.fullScreen(window)
let _ = Window.history(window)
let _ = Window.innerWidth(window)
let _ = Window.innerHeight(window)
let _ = Window.isSecureContext(window)
let _ = Window.length(window)
let _ = Window.location(window)
let _ = Window.setLocation(window, "http://reason.ml")
let _ = Window.locationbar(window)
let _ = Window.menubar(window)
let _ = Window.name(window)
let _ = Window.setName(window, "new name")
let _ = Window.navigator(window)
let _ = Window.opener(window)
let _ = Window.outerWidth(window)
let _ = Window.outerHeight(window)
let _ = Window.pageXOffset(window)
let _ = Window.pageYOffset(window)
let _ = Window.parent(window)
let _ = Window.performance(window)
let _ = Window.personalbar(window)
let _ = Window.screen(window)
let _ = Window.screenX(window)
let _ = Window.screenY(window)
let _ = Window.scrollbars(window)
let _ = Window.scrollX(window)
let _ = Window.scrollY(window)
let _ = Window.self(window)
let _ = Window.speechSynthesis(window)
let _ = Window.status(window)
let _ = Window.setStatus(window, "new status")
let _ = Window.statusbar(window)
let _ = Window.toolbar(window)
let _ = Window.top(window)
let _ = Window.window(window)

window->Window.alert("hello!")
Window.blur(window)
let idleId = window->Window.requestIdleCallback(_ => ()) /* out of order */
window->Window.cancelIdleCallback(idleId)
Window.close(window)
let _ = window->Window.confirm("is ok?")
Window.focus(window)
let _ = window->Window.getComputedStyle(el)
let _ = window->Window.getComputedStyleWithPseudoElement(el, "hover")
let _ = Window.getSelection(window)
let _ = window->Window.matchMedia("max-height: 400")
let _ = window->Window.moveBy(10, -10)
let _ = window->Window.moveTo(120, 300)
let _: option<Dom.window> =
  window->Window.open_(~url="http://...", ~name="my window", ~features="menubar=yes", ())
let _: option<Dom.window> = window->Window.open_(~url="http://...", ~name="my window", ())
window->Window.postMessage("my message", "*")
Window.print(window)
let _ = window->Window.prompt("type you password, please?")
let _ = window->Window.promptWithDefault("type password or use this?", "password")
let _ = window->Window.requestIdleCallbackWithOptions(_ => (), {"timeout": 1000})
let _ = window->Window.resizeBy(10, -10)
let _ = window->Window.resizeTo(120, 300)
let _ = window->Window.scroll(0.0, 0.0)
let _ = window->Window.scrollBy(10.0, -10.0)
let _ = window->Window.scrollTo(120.5, 300.3)
Window.stop(window)
Window.setOnLoad(window, () => print_endline("load"))
