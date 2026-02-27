import React, { useState } from "react";

import './assets/style.css';

import Input from "./components/common/input";
import useInput from "./customHooks/useInput";

function App() {
  const [submitted, setSubmitted] = useState(false);

  const emailInput = useInput("")
  const passwordInput = useInput("")


  const handleSubmit = (e) => {
    e.preventDefault();
    setSubmitted(true)
    const emailIsValid = /\S+@\S+\.\S+/.test(emailInput.value)
    const passwordIsValid = passwordInput.value.length > 8
    if (emailIsValid && passwordIsValid) {
      console.log("Form is valid");

    }
  };

  return (
    <div className="min-h-screen bg-gray-200 flex justify-center items-center">
      <div className="bg-white p-8 rounded shadow-md w-96">
        <h2 className="text-2xl font-bold mb-4">Login</h2>
        <form onSubmit={handleSubmit} noValidate>
          <div className="mb-4">
            <Input
              type="email"
              value={emailInput.value}
              onChange={emailInput.onChange}
              placeholder="Email"
              className="w-full p-2 rounded border border-gray-300 focus:outline-none focus:border-blue-500"
            />

            {submitted && !/\S+@\S+\.\S+/.test(emailInput.value)&&(
              <p className="text-red-500 text-sm mt-1">
                Please enter a valid email address.
              </p>
            )}
          </div>
          <div className="mb-4">
            <Input
              type="password"
              value={passwordInput.value}
              onChange={passwordInput.onChange}
              placeholder="Password"
              className="w-full p-2 rounded border border-gray-300 focus:outline-none focus:border-blue-500"
            />

            {submitted && passwordInput.value.length <= 8 && (
              <p className="text-red-500 text-sm mt-1">
                Password must be at least 8 characters long.
              </p>
            )}
          </div>
          <button
            type="submit"
            className="w-full bg-blue-500 text-white py-2 px-4 rounded hover:bg-blue-600 focus:outline-none focus:ring-2 focus:ring-blue-500"
          >
            Login
          </button>
        </form>
      </div>
    </div>
  );
}

export default App;
