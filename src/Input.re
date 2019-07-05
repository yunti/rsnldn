[@react.component]
let make = () => {
  let (text, setText) = React.useState(() => "");

  let handler = event => ReactEvent.Form.target(event)##value |> setText;
  Js.log(text);

  <>
    <input
      style={ReactDOMRe.Style.make(~paddingTop="4px", ~paddingBottom="4px", ())}
      placeholder="Placeholder"
      onChange=handler
      value=text
    />
    <button> {React.string("Button")} </button>
  </>;
};