let component = ReasonReact.statelessComponent("App");

let sayHello = () => Js.log("Hello")

let make = (_) => {
  ...component,
  render: _ =>
    <Button className="class" onClick=sayHello>
      {ReasonReact.string("Hello Reason React")}
    </Button>,
};

