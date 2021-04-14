import React from 'react'
import Filho from './Filho'

export default props =>
    <div>
        <Filho {...props}>João</Filho>
        <Filho filho={props.filho}>Maria</Filho>
        <Filho filho='Silva'>Pedro</Filho>
    </div>