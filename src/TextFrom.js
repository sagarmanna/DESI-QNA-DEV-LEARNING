import React, { useState } from 'react';

export default function TextFrom(props) {
  const [text, setText] = useState("Enter text here");


  
  const handleUpClick = () => {
    console.log("Upper case was clicked"+text);
    let newText=text.toUpperCase();
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
      <button className="btn btn-primary" onClick={handleUpClick}>Convert</button>
      <button type="button" class="btn btn-secondary mx-4" onClick={handleDelete}>Delete Content</button>



    </div>
  );
}
