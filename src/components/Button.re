let component = ReasonReact.statelessComponent("Button");

let make = (~className, ~onClick, children) => {
  ...component,
  render: (_) =>
    ReasonReact.createDomElement(
      "button",
      ~props={"className": className, "onClick": onClick},
      children
    )
};