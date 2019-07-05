[@react.component]
let make = (~name) => {
  <div
    style={ReactDOMRe.Style.make(
      ~color="#444444",
      ~fontSize="40px",
      ~fontFamily="sans-serif",
      ~paddingTop="40px",
      (),
    )}>
    {ReasonReact.string("" ++ name)}
  </div>;
};