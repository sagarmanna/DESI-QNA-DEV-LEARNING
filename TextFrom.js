import React, { useState } from 'react';



export default function TextFrom(props) {
  const [text, setText] = useState("Enter text here");


  
  const handleUpClick = () => {
    console.log("Upper case was clicked"+text);
    let newText=text.toUpperCase();
    //setText(text.toUpperCase()); // Convert text to uppercase
    setText(newText);
  };

  const handleLowerClick = () => {
    console.log("Upper case was clicked"+text);
    let newText=text.toLowerCase();
    //setText(text.toUpperCase()); // Convert text to uppercase
    setText(newText);
  };
  const handleOnChange = (event) => {
    setText(event.target.value); // Update text as user types
    console.log("on change")
  };


  const handleDelete=()=>{
    
    setText(""); 
   }

  return (
    <>
    <div>
      <h1>{props.heading}</h1>

      <div className="mb-3">
        <label htmlFor="exampleFormControlTextarea1" className="form-label">
          {props.heading}
        </label>
        <textarea 
          className="form-control" 
          id="exampleFormControlTextarea1" 
          rows="8" 
          value={text} 
          onChange={handleOnChange}
        ></textarea>
      </div>
      <button className="btn btn-primary mx-4" onClick={handleUpClick}>To UpperCase</button>
      <button className="btn btn-primary mx-4" onClick={handleLowerClick}>To LowerCase</button>

      <button type="button" class="btn btn-secondary mx-4" onClick={handleDelete}>Delete Content</button>

    </div>

    <div className="container my-4">
    <h1>your Text summary</h1>

    <p>{text.split(" ").length} Words and {text.length} characters</p>
    <p>{0.008*text.split(" ").length}Miniutes read</p>
    </div>
    <h2>Preview</h2>
    <p>{text}</p>



    </>
  );
}
