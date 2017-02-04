{
  open ReasonJs;

  let el = Document.getElementById "some-element";
  let el2 = Document.getElementById "some-other-element";

  let _ = Element.childNodes el;
  let _ = Element.firstChild el;
  let _ = Element.lastChild el;
  let _ = Element.nextSibling el;
  let _ = Element.nodeName el;
  let _ = Element.nodeType el;
  let _ = Element.nodeValue el;
  let _ = Element.setNodeValue el Js.Null.empty;
  let _ = Element.ownerDocument el;
  let _ = Element.parentNode el;
  let _ = Element.parentElement el;
  let _ = Element.previousSibling el;
  let _ = Element.rootNode el;
  let _ = Element.textContent el;
  let _ = Element.setTextContent el "foo";

  let _ = Element.appendChild el el2;
  let _ = Element.cloneNode el;
  let _ = Element.cloneNodeDeep el (Js.Boolean.to_js_boolean true);
  let _ = Element.compareDocumentPosition el el2;
  let _ = Element.contains el el2;
  let _ = Element.getRootNode el;
  let _ = Element.getRootNodeComposed el (Js.Boolean.to_js_boolean true);
  let _ = Element.hasChildNodes el;
  let _ = Element.insertBefore el el2 Js.Null.empty;
  let _ = Element.isDefaultNamespace el "http://...";
  let _ = Element.isEqualNode el el2;
  let _ = Element.isSameNode el el2;
  let _ = Element.lookupPrefix el;
  let _ = Element.lookupNamespaceURI el Js.Null.empty;
  let _ = Element.normalize el;
  let _ = Element.removeChild el el2;

  let _ = Element.assignedSlot el;
  let _ = Element.attributes el;
  let _ = Element.classList el;
  let _ = Element.className el;
  let _ = Element.setClassName el "my-class-name";
  let _ = Element.clientHeight el;
  let _ = Element.clientLeft el;
  let _ = Element.clientTop el;
  let _ = Element.clientWidth el;
  let _ = Element.id el;
  let _ = Element.setId el "my-id";
  let _ = Element.innerHTML el;
  let _ = Element.setInnerHTML el "<strong>stuff</strong>";
  let _ = Element.localName el;
  let _ = Element.namespaceURI el;
  let _ = Element.nextElementSibling el;
  let _ = Element.outerHTML el;
  let _ = Element.setOuterHTML el "<strong>stuff</strong>";
  let _ = Element.prefix el;
  let _ = Element.previousElementSibling el;
  let _ = Element.scrollHeight el;
  let _ = Element.scrollLeft el;
  let _ = Element.setScrollLeft el 0;
  let _ = Element.scrollTop el;
  let _ = Element.setScrollTop el 0;
  let _ = Element.scrollWidth el;
  let _ = Element.shadowRoot el;
  let _ = Element.slot el;
  let _ = Element.setSlot el "<strong>stuff</strong>";
  let _ = Element.tagName el;

  let _ = Element.attachShadow el { "mode": "open" };
  let _ = Element.animate el { "transform": "translateT(0px)" } { "duration": 1000 };
  let _ = Element.closest el "input";
  let _ = Element.createShadowRoot el;
  let _ = Element.getAttribute el "href";
  let _ = Element.getAttributeNS el "http://..." "foo";
  let _ = Element.getBoundingClientRect el;
  let _ = Element.getClientRects el;
  let _ = Element.getElementsByClassName el "some-class-name";
  let _ = Element.getElementsByTagName el "pre";
  let _ = Element.getElementsByTagNameNS el "http://..." "td";
  let _ = Element.hasAttribute el "data-my-value";
  let _ = Element.hasAttributeNS el "http://..." "foo";
  let _ = Element.hasAttributes el;
  let _ = Element.insertAdjacentElement el "beforebegin" el2;
  let _ = Element.insertAdjacentText el "afterbegin" "text";
  let _ = Element.matches el "input";
  let _ = Element.querySelector el "input";
  let _ = Element.querySelectorAll el "input";
  /*let _ = Element.releasePointerCapture el pointerId /* There's no way to get a pointerId right now */ */
  let _ = Element.remove el;
  let _ = Element.removeAttribute el "href";
  let _ = Element.removeAttributeNS el "http://..." "foo";
  let _ = Element.requestFullscreen el;
  let _ = Element.requestPointerLock el;
  let _ = Element.scrollIntoView el;
  let _ = Element.scrollIntoViewAlignToTop el (Js.Boolean.to_js_boolean true);
  let _ = Element.scrollIntoViewWithOptions el { "block": "end", "behvaior": "smooth" };
  let _ = Element.setAttribute el "href" "http://...";
  let _ = Element.setAttributeNS el "http://..." "foo" "bar";
  /*let _ = Element.setPointerCapture el pointerId /* There's no way to get a pointerId right now */ */




  let _ = Date.make ();
  let _ = Date.makeWithValue 0.;
  let _ = Date.makeWithYearMonth 0. 1.;
  let _ = Date.makeWithYearMonthDate 0. 1. 2.;
  let _ = Date.makeWithYearMonthDateHours 0. 1. 2. 3.;
  let _ = Date.makeWithYearMonthDateHoursMinutes 0. 1. 2. 3. 4.;
  let _ = Date.makeWithYearMonthDateHoursMinutesSeconds 0. 1. 2. 3. 4. 5.;
  let _ = Date.utc ();
  let _ = Date.utcWithYearMonth 0. 1.;
  let _ = Date.utcWithYearMonthDate 0. 1. 2.;
  let _ = Date.utcWithYearMonthDateHours 0. 1. 2. 3.;
  let _ = Date.utcWithYearMonthDateHoursMinutes 0. 1. 2. 3. 4.;
  let _ = Date.utcWithYearMonthDateHoursMinutesSeconds 0. 1. 2. 3. 4. 5.;
  let _ = Date.now ();
  let date = Date.parse "Dec 25, 1995";

  let _ = Date.getDate date;
  let _ = Date.getDay date;
  let _ = Date.getFullYear date;
  let _ = Date.getHours date;
  let _ = Date.getMilliseconds date;
  let _ = Date.getMinutes date;
  let _ = Date.getMonth date;
  let _ = Date.getSeconds date;
  let _ = Date.getTime date;
  let _ = Date.getTimezoneOffset date;
  let _ = Date.getUTCDate date;
  let _ = Date.getUTCDay date;
  let _ = Date.getUTCFullYear date;
  let _ = Date.getUTCHours date;
  let _ = Date.getUTCMilliseconds date;
  let _ = Date.getUTCMinutes date;
  let _ = Date.getUTCMonth date;
  let _ = Date.getUTCSeconds date;
  let _ = Date.getYear date;

  let _ = Date.setDate date 0.;
  let _ = Date.setFullYear date 0.;
  let _ = Date.setFullYearMonth date 0. 1.;
  let _ = Date.setFullYearMonthDay date 0. 1. 2.;
  let _ = Date.setHours date 0.;
  let _ = Date.setHoursMinutes date 0. 1.;
  let _ = Date.setHoursMinutesSeconds date 0. 1. 2.;
  let _ = Date.setHoursMinutesSecondsMilliseconds date 0. 1. 2. 3.;
  let _ = Date.setMilliseconds date 0.;
  let _ = Date.setMinutes date 0.;
  let _ = Date.setMinutesSeconds date 0. 1.;
  let _ = Date.setMinutesSecondsMilliseconds date 0. 1. 2.;
  let _ = Date.setMonth date 0.;
  let _ = Date.setMonthDay date 0. 1.;
  let _ = Date.setSeconds date 0.;
  let _ = Date.setSecondsMilliseconds date 0. 1.;
  let _ = Date.setTime date 0.;
  let _ = Date.setUTCDate date 0.;
  let _ = Date.setUTCFullYear date 0.;
  let _ = Date.setUTCFullYearMonth date 0. 1.;
  let _ = Date.setUTCFullYearMonthDay date 0. 1. 2.;
  let _ = Date.setUTCHours date 0.;
  let _ = Date.setUTCHoursMinutes date 0. 1.;
  let _ = Date.setUTCHoursMinutesSeconds date 0. 1. 2.;
  let _ = Date.setUTCHoursMinutesSecondsMilliseconds date 0. 1. 2. 3.;
  let _ = Date.setUTCMilliseconds date 0.;
  let _ = Date.setUTCMinutes date 0.;
  let _ = Date.setUTCMinutesSeconds date 0. 1.;
  let _ = Date.setUTCMinutesSecondsMilliseconds date 0. 1. 2.;
  let _ = Date.setUTCMonth date 0.;
  let _ = Date.setUTCMonthDay date 0. 1.;
  let _ = Date.setUTCSeconds date 0.;
  let _ = Date.setUTCSecondsMilliseconds date 0. 1.;
  let _ = Date.setUTCTime date 0.;

  let _ = Date.toDateString date;
  let _ = Date.toGMTString date;
  let _ = Date.toISOString date;
  let _ = Date.toJSON date;
  let _ = Date.toLocaleDateString date;
  let _ = Date.toLocaleString date;
  let _ = Date.toLocaleTimeString date;
  let _ = Date.toString date;
  let _ = Date.toTimeString date;
  let _ = Date.toUTCString date;

  let _ = Date.valueOf date;


  let _ = setInterval (fun () => Js.log "hello!") 1000;

  let _ = Window.(innerWidth window);

  let _ = Window.(innerHeight window);

  let _ = Document.getElementById "foo" |> Element.value;

  Window.(addEventListener window "click" (fun () => print_endline "asd"));

  Window.(onLoad window (fun () => print_endline "load"));
  let p = fetch "/greatings";

  let p2 =
    Promise.(thenDo (thenDo p (fun res => Response.text res)) (fun text => print_endline text));

  let _ = Promise.catchError p2 (fun err => Js.log err);

  let _ = Promise.(thenDo (thenDo p (fun res => Response.json res)) (fun json => Js.log json));
}
