[@react.component]
let make = (~name) => {
  <button
    style={ReactDOMRe.Style.make(~color="#444444", ~fontSize="16px", ~marginTop="20px", ())}>
    {ReasonReact.string(name)}
  </button>;
};